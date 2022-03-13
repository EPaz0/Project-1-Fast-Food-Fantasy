#ifndef CLOSESTTRIP_H
#define CLOSESTTRIP_H

#include <QDialog>
#include <QWidget>
#include <QtSql>
#include "restaurant.h"
#include "endwindow.h"


namespace Ui {
class ClosestTrip;
}

class MainWindow;

class ClosestTrip : public QDialog
{
    Q_OBJECT

public:
    explicit ClosestTrip(QWidget *parent = nullptr);
    QString AddApostropheToString(QString name);
    int GetRestaurantIDUsingQSL(QString name);
    QString GetRestaurantNameUsingQSL(int id);
    ~ClosestTrip();

signals:
    void Admin();
    void backMain();
    void AdminCheck();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void isAdmin();

private:
    Ui::ClosestTrip *ui;
    endwindow *endWindow;
    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery qry;
    float totalSpendingOnTrip = 0.0;
    bool admin = false;

};

#endif // CLOSESTTRIP_H
