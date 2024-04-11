/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QLabel *university_label;
    QLineEdit *university_line_edit;
    QLabel *company_label;
    QLineEdit *company_line_edit;
    QLabel *job_label;
    QLineEdit *job_line_edit;
    QLabel *birthdate_label;
    QLineEdit *day_line_edit;
    QLineEdit *month_line_edit;
    QLineEdit *year_line_edit;
    QLabel *day_label;
    QLabel *month_label;
    QLabel *year_label;
    QPushButton *update_button;
    QPushButton *logout_button;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QString::fromUtf8("profile"));
        profile->resize(569, 435);
        profile->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 158, 158);"));
        university_label = new QLabel(profile);
        university_label->setObjectName(QString::fromUtf8("university_label"));
        university_label->setGeometry(QRect(130, 80, 101, 31));
        university_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        university_line_edit = new QLineEdit(profile);
        university_line_edit->setObjectName(QString::fromUtf8("university_line_edit"));
        university_line_edit->setGeometry(QRect(240, 90, 113, 24));
        university_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        company_label = new QLabel(profile);
        company_label->setObjectName(QString::fromUtf8("company_label"));
        company_label->setGeometry(QRect(130, 140, 91, 31));
        company_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        company_line_edit = new QLineEdit(profile);
        company_line_edit->setObjectName(QString::fromUtf8("company_line_edit"));
        company_line_edit->setGeometry(QRect(240, 140, 113, 24));
        company_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        job_label = new QLabel(profile);
        job_label->setObjectName(QString::fromUtf8("job_label"));
        job_label->setGeometry(QRect(130, 180, 55, 31));
        job_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        job_line_edit = new QLineEdit(profile);
        job_line_edit->setObjectName(QString::fromUtf8("job_line_edit"));
        job_line_edit->setGeometry(QRect(240, 190, 113, 24));
        job_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        birthdate_label = new QLabel(profile);
        birthdate_label->setObjectName(QString::fromUtf8("birthdate_label"));
        birthdate_label->setGeometry(QRect(120, 290, 101, 21));
        birthdate_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        day_line_edit = new QLineEdit(profile);
        day_line_edit->setObjectName(QString::fromUtf8("day_line_edit"));
        day_line_edit->setGeometry(QRect(230, 290, 30, 30));
        day_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        month_line_edit = new QLineEdit(profile);
        month_line_edit->setObjectName(QString::fromUtf8("month_line_edit"));
        month_line_edit->setGeometry(QRect(280, 290, 40, 30));
        month_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        year_line_edit = new QLineEdit(profile);
        year_line_edit->setObjectName(QString::fromUtf8("year_line_edit"));
        year_line_edit->setGeometry(QRect(350, 290, 51, 31));
        year_line_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(36, 36, 36);"));
        day_label = new QLabel(profile);
        day_label->setObjectName(QString::fromUtf8("day_label"));
        day_label->setGeometry(QRect(230, 240, 40, 41));
        day_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        month_label = new QLabel(profile);
        month_label->setObjectName(QString::fromUtf8("month_label"));
        month_label->setGeometry(QRect(280, 250, 70, 20));
        month_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        year_label = new QLabel(profile);
        year_label->setObjectName(QString::fromUtf8("year_label"));
        year_label->setGeometry(QRect(350, 240, 50, 41));
        year_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        update_button = new QPushButton(profile);
        update_button->setObjectName(QString::fromUtf8("update_button"));
        update_button->setGeometry(QRect(220, 340, 101, 25));
        update_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));
        logout_button = new QPushButton(profile);
        logout_button->setObjectName(QString::fromUtf8("logout_button"));
        logout_button->setGeometry(QRect(470, 10, 80, 25));
        logout_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QApplication::translate("profile", "Dialog", nullptr));
        university_label->setText(QApplication::translate("profile", "university:", nullptr));
        company_label->setText(QApplication::translate("profile", "company:", nullptr));
        job_label->setText(QApplication::translate("profile", "job:", nullptr));
        birthdate_label->setText(QApplication::translate("profile", "Birth date:", nullptr));
        day_line_edit->setInputMask(QApplication::translate("profile", "D9", nullptr));
        month_line_edit->setInputMask(QApplication::translate("profile", "D9", nullptr));
        year_line_edit->setInputMask(QApplication::translate("profile", "D999", nullptr));
        day_label->setText(QApplication::translate("profile", "day", nullptr));
        month_label->setText(QApplication::translate("profile", "month", nullptr));
        year_label->setText(QApplication::translate("profile", "year", nullptr));
        update_button->setText(QApplication::translate("profile", "Update profile", nullptr));
        logout_button->setText(QApplication::translate("profile", "log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
