#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QStandardPaths>
#include <QDir>
#include <QList>
#include <QListWidgetItem>
#include <QtSql>
#include "signin.h"
#include "closesttrip.h"
#include "endwindow.h"
#include "restaurant.h"
#include "shorttesttripfromdomino.h"
#include "customtrip.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int GetRestaurantIDUsingQSL(QString name);
    double GetRestaurantPriceUsingQSL(QString name, QString menuItem);
    QString AddApostropheToString(QString restaurantname);
    QString GetRestaurantNameUsingQSL(int id);

private slots:
    void on_actionLog_in_triggered();

    void Admin();

    void on_actionLog_out_triggered();

    void on_pushButton_clicked();

    void on_action10_Closet_triggered();

    void on_listWidget_item_itemDoubleClicked(QListWidgetItem *item);

    void on_SubmitChange_clicked();

    void on_actionShortest_Trip_triggered();

    void on_actionCustom_Trip_triggered();

    void on_listWidget_price_itemDoubleClicked(QListWidgetItem *item);

    void on_deleteMenuItem_clicked();

    void on_addMenu_clicked();

    void on_SubmitNew_clicked();

    void on_listWidget_price_itemClicked(QListWidgetItem *item);

    void on_actionUpdate_List_triggered();

    void on_deleteRestaurant_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

signals:
    void isAdmin();

private:
    Ui::MainWindow *ui;
    Signin *signin;
    ClosestTrip *tripFromSaddleback;
    ShorttestTripFromDomino *tripFromDomino;
    customtrip *tripCustomized;
    QList<restaurant> restaurantList;
    bool admin = false;
    int restaurantSelected;

    // import the table already created
//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    QSqlQuery qry;
};
#endif // MAINWINDOW_H
