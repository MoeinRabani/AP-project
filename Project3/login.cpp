#include "login.h"
#include "ui_login.h"
#include "profile.h"
#include "signup.h"




login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("d:\\Project 3\\user.db");
    db.open();
}

login::~login()
{
    delete ui;
}

void login::on_profile_button_clicked()
{
    QSqlQuery qry;
    QString username = ui -> username_line_edit -> text();
    QString password = ui -> password_line_edit -> text();
    qry.prepare("SELECT * FROM users WHERE username =:mamad AND password =:pass");
    qry.bindValue(":mamad", username);
    qry.bindValue(":pass", password);
    qry.exec();
    if(qry.next()){

        QSqlQuery log;
        log.exec("UPDATE users SET login = 1 WHERE username = '"+ username +"'");

        QMessageBox::information(this,"Success","User loged in successfuly");
        this->close();
        profile f;
        f.setWindowTitle("Profile page");
        f.exec();
    }
    else{
        QMessageBox::warning(this,"Error","An error occurred while loging in");
        return;
    }
}


void login::on_pushButton_clicked()
{
    this->close();
    signup f;
    f.setWindowTitle("Sign up page");
    f.exec();
}

