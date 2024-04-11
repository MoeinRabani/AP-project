/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splash
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QMainWindow *splash)
    {
        if (splash->objectName().isEmpty())
            splash->setObjectName(QString::fromUtf8("splash"));
        splash->resize(712, 459);
        splash->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 158, 158);"));
        centralwidget = new QWidget(splash);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 310, 80, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 83, 83);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 0, 281, 161));
        label->setStyleSheet(QString::fromUtf8("image: url(:/images/work.jpeg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 331, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 60, 411, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 90, 151, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 130, 411, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 150, 401, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 170, 411, 24));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;"));
        splash->setCentralWidget(centralwidget);

        retranslateUi(splash);

        QMetaObject::connectSlotsByName(splash);
    } // setupUi

    void retranslateUi(QMainWindow *splash)
    {
        splash->setWindowTitle(QApplication::translate("splash", "splash", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("splash", "<html><head/><body><p>Open app</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("splash", "Continue", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("splash", "Welcome to linked", nullptr));
        label_3->setText(QApplication::translate("splash", "The world's largest professional network", nullptr));
        label_4->setText(QApplication::translate("splash", "on the internet", nullptr));
        lineEdit->setText(QApplication::translate("splash", "You can use Linkedin to find the right job or internship", nullptr));
        lineEdit_2->setText(QApplication::translate("splash", "connect and stregthen professional relatioships", nullptr));
        lineEdit_3->setText(QApplication::translate("splash", "and learn the skills you need to succeed in your career", nullptr));
    } // retranslateUi

};

namespace Ui {
    class splash: public Ui_splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
