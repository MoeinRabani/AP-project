#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QRandomGenerator"
#include"QMessageBox"


namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_login_button_clicked();

    void on_signup_button_clicked();

private:
    Ui::signup *ui;

    QSqlDatabase db;
};

#endif // SIGNUP_H
