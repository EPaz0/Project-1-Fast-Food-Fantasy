#ifndef SHORTTESTTRIPFROMDOMINO_H
#define SHORTTESTTRIPFROMDOMINO_H

#include <QDialog>
#include <QWidget>
#include <QtSql>
#include <QToolTip>
#include "restaurant.h"
#include "endwindow.h"

namespace Ui {
class ShorttestTripFromDomino;
}

class ShorttestTripFromDomino : public QDialog
{
    Q_OBJECT

public:
    explicit ShorttestTripFromDomino(QWidget *parent = nullptr);
    ~ShorttestTripFromDomino();
    QString AddApostropheToString(QString name);
    int GetRestaurantIDUsingQSL(QString name);
    QString GetRestaurantNameUsingQSL(int id);
     void isAdmin();

signals:
    void Admin();
    void backMain();
    void AdminCheck();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ShorttestTripFromDomino *ui;
    endwindow *endWindow;
    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery qry;
    float totalSpendingOnTrip = 0.0;
    bool admin = false;
};

#endif // SHORTTESTTRIPFROMDOMINO_H
