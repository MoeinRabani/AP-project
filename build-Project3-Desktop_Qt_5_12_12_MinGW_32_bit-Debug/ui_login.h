/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *profile_button;
    QPushButton *pushButton;
    QLineEdit *username_line_edit;
    QLineEdit *password_line_edit;
    QLabel *username_label;
    QLabel *password_label;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(428, 447);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 158, 158);"));
        profile_button = new QPushButton(login);
        profile_button->setObjectName(QString::fromUtf8("profile_button"));
        profile_button->setGeometry(QRect(160, 240, 91, 25));
        profile_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 310, 181, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));
        username_line_edit = new QLineEdit(login);
        username_line_edit->setObjectName(QString::fromUtf8("username_line_edit"));
        username_line_edit->setGeometry(QRect(190, 90, 151, 24));
        username_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);\n"
"border-radius: 11px;"));
        password_line_edit = new QLineEdit(login);
        password_line_edit->setObjectName(QString::fromUtf8("password_line_edit"));
        password_line_edit->setGeometry(QRect(190, 150, 151, 24));
        password_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);\n"
"border-radius: 11px;"));
        password_line_edit->setEchoMode(QLineEdit::Password);
        username_label = new QLabel(login);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(70, 90, 101, 16));
        username_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        password_label = new QLabel(login);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(70, 150, 101, 21));
        password_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        profile_button->setText(QApplication::translate("login", "Continue", nullptr));
        pushButton->setText(QApplication::translate("login", "Don't have an account?", nullptr));
        username_label->setText(QApplication::translate("login", "username:", nullptr));
        password_label->setText(QApplication::translate("login", "password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
