#include "splash.h"
#include "ui_splash.h"
#include "login.h"
#include "profile.h"
splash::splash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::splash)
{
    ui->setupUi(this);
    db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("d:\\Project 3\\user.db");
    db.open();
    if(!db.open()){
        qDebug ("Data base didn't open");
    }
}

splash::~splash()
{
    delete ui;
}


void splash::on_pushButton_clicked()
{
    this->close();
    QSqlQuery log("SELECT * FROM users WHERE login = 1");
    if(log.exec() && log.next()){
        profile p;
        p.setWindowTitle("Profile page");
        p.exec();
    }
    else{
        login l;
        l.setWindowTitle("Login page");
        l.exec();
    }

}

