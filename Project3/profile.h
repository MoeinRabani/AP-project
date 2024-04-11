#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QMessageBox>

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = nullptr);
    ~profile();

private slots:
    void on_logout_button_clicked();

    void on_update_button_clicked();

private:
    Ui::profile *ui;
    QSqlDatabase db;

};

#endif // PROFILE_H
