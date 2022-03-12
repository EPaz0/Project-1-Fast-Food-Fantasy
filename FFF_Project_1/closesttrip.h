#ifndef CLOSESTTRIP_H
#define CLOSESTTRIP_H

#include <QDialog>
#include <QWidget>
#include <QtSql>
#include "restaurant.h"


namespace Ui {
class ClosestTrip;
}

class MainWindow;

class ClosestTrip : public QDialog
{
    Q_OBJECT

public:
    explicit ClosestTrip(QWidget *parent = nullptr);
    ~ClosestTrip();

signals:
    void Admin();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ClosestTrip *ui;
    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery qry;
};

#endif // CLOSESTTRIP_H
