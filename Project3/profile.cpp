#include "profile.h"
#include "ui_profile.h"
#include "login.h"


QString username;
profile::profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("d:\\Project 3\\user.db");
    db.open();
    QSqlQuery show;
    show.prepare("SELECT day, month, year, job, company, university FROM users WHERE login = 1");
    if(show.exec() && show.next()){
        int day = show.value(0).toInt();
        ui->day_line_edit->setText(QString::number(day));
        int month = show.value(1).toInt();
        ui->month_line_edit->setText(QString::number(month));
        int year = show.value(2).toInt();
        ui->year_line_edit->setText(QString::number(year));
        QString job = show.value(3).toString();
        ui->job_line_edit->setText(job);
        QString company = show.value(4).toString();
        ui->company_line_edit->setText(company);
        QString university = show.value(5).toString();
        ui->university_line_edit->setText(university);
    }

}

profile::~profile()
{
    delete ui;
}


// logout button
void profile::on_logout_button_clicked()
{
    this->close();
    QSqlQuery logout;
    logout.exec("UPDATE users SET login = 0 WHERE login = 1");
    login l;
    l.setWindowTitle("Login page");
    l.exec();
}


void profile::on_update_button_clicked()
{
    int day = ui->day_line_edit->text().toInt();
    int month = ui->month_line_edit->text().toInt();
    int year = ui->year_line_edit->text().toInt();
    QString job = ui->job_line_edit->text();
    QString company = ui->company_line_edit->text();
    QString university = ui->university_line_edit->text();
    QSqlQuery update;
    update.prepare("UPDATE users SET day =:day , month=:month , year=:year , job=:job , company=:company , university=:university WHERE login = 1");
    update.bindValue(":day", day);
    update.bindValue(":month", month);
    update.bindValue(":year", year);
    update.bindValue(":job", job);
    update.bindValue(":company", company);
    update.bindValue(":university", university);
    if(update.exec()){
        QMessageBox::information(this,"Success","Profile updated successfully");
    }
    else{
        QMessageBox::warning(this,"Error","An error occured while signing up");
    }

}
