#ifndef ALLTWELVETRIP_H
#define ALLTWELVETRIP_H

#include <QDialog>
#include <QWidget>
#include <QtSql>
#include "restaurant.h"
#include "endwindow.h"

namespace Ui {
class alltwelvetrip;
}

class alltwelvetrip : public QDialog
{
    Q_OBJECT

public:
    struct revenueRecord
    {
        QString restaurantName;
        float revenue;
    };
    explicit alltwelvetrip(QWidget *parent = nullptr);
    QString AddApostropheToString(QString name);
    int GetRestaurantIDUsingQSL(QString name);
    QString GetRestaurantNameUsingQSL(int id);
    ~alltwelvetrip();

signals:
    void Admin();
    void backMain();
    void AdminCheck();

private slots:
    void isAdmin();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::alltwelvetrip *ui;
    endwindow *endWindow;
    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery qry;
    float totalSpendingOnTrip = 0.0;
    bool admin = false;
    QList<revenueRecord> revenueRecords;
};

#endif // ALLTWELVETRIP_H
