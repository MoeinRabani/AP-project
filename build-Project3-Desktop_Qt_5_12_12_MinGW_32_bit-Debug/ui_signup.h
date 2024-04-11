/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QPushButton *signup_button;
    QPushButton *login_button;
    QLabel *random_label;
    QLineEdit *random_line_edit;
    QLabel *label;
    QLineEdit *username_line_edit;
    QLabel *label_2;
    QLineEdit *password_line_edit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(473, 380);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 158, 158);"));
        signup_button = new QPushButton(signup);
        signup_button->setObjectName(QString::fromUtf8("signup_button"));
        signup_button->setGeometry(QRect(180, 260, 80, 25));
        signup_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);\n"
"\n"
""));
        login_button = new QPushButton(signup);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(150, 320, 151, 25));
        login_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));
        random_label = new QLabel(signup);
        random_label->setObjectName(QString::fromUtf8("random_label"));
        random_label->setGeometry(QRect(210, 160, 111, 21));
        random_label->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        random_line_edit = new QLineEdit(signup);
        random_line_edit->setObjectName(QString::fromUtf8("random_line_edit"));
        random_line_edit->setGeometry(QRect(210, 200, 111, 24));
        random_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 101, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        username_line_edit = new QLineEdit(signup);
        username_line_edit->setObjectName(QString::fromUtf8("username_line_edit"));
        username_line_edit->setGeometry(QRect(190, 70, 161, 24));
        username_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);\n"
"border-radius:11px;"));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        password_line_edit = new QLineEdit(signup);
        password_line_edit->setObjectName(QString::fromUtf8("password_line_edit"));
        password_line_edit->setGeometry(QRect(190, 120, 161, 24));
        password_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);\n"
"border-radius:11px;"));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 190, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 120, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/lock.png);"));
        label_5 = new QLabel(signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 70, 41, 31));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icon/user.png);"));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "Dialog", nullptr));
        signup_button->setText(QApplication::translate("signup", "Continue", nullptr));
        login_button->setText(QApplication::translate("signup", "Have an account?", nullptr));
        random_label->setText(QString());
        label->setText(QApplication::translate("signup", "Username:", nullptr));
        label_2->setText(QApplication::translate("signup", "password:", nullptr));
        label_3->setText(QApplication::translate("signup", "Enter the code:", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
