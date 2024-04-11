#ifndef SPLASH_H
#define SPLASH_H

#include <QMainWindow>

#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class splash; }
QT_END_NAMESPACE

class splash : public QMainWindow
{
    Q_OBJECT

public:
    splash(QWidget *parent = nullptr);
    ~splash();

private slots:
    void on_pushButton_clicked();

private:
    Ui::splash *ui;
    QSqlDatabase db;
};
#endif // SPLASH_H
