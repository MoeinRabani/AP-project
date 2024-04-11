#include "signup.h"
#include "ui_signup.h"
#include "login.h"

#include "QRandomGenerator"

#include"QMessageBox"

int random = QRandomGenerator::global()->bounded(10000,99999);

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->random_label->setText(QString::number(random));
    db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("d:\\Project 3\\user.db");
    db.open();
    if(!db.open()){
        qDebug ("Data base didn't open");
    }
}

signup::~signup()
{
    delete ui;
}

void signup::on_login_button_clicked()
{
    this->close();
    login f;
    f.setWindowTitle("Login page");
    f.exec();
}


void signup::on_signup_button_clicked()
{
    if(ui->random_line_edit->text().toInt() == random){

        QString username = ui->username_line_edit->text();
        QString password = ui->password_line_edit->text();

        // valide password and user name
        if(username.isEmpty() || password.isEmpty()){
            QMessageBox::warning(this,"Eror","Please fill in all fields");
            return;
        }
        if(password.length() < 8){
            QMessageBox::warning(this,"Eror","Password must be at least 8 characters long");
            return;
        }



        // check if username already exists
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT * FROM users WHERE username=:username");
        checkQuery.bindValue(":username", username);
        if(checkQuery.exec() && checkQuery.next()){
            QMessageBox::warning(this,"Eror","Username already exists");
            return;
        }




        QSqlQuery q;
        q.prepare("INSERT INTO users(username, password) VALUES (:mamad, :pass)");
        q.bindValue(":mamad", username);
        q.bindValue(":pass", password);
        if(q.exec()){
            QMessageBox::information(this,"Success","User signed up successfully");
        }
        else{
            QMessageBox::warning(this,"Error","An error occured while signing up");
        }
        this->close();
        login f;
        f.setWindowTitle("Login page");
        f.exec();
    }
}

