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

private slots:
    void on_actionLog_in_triggered();

    void Admin();

    void on_actionLog_out_triggered();

    void on_pushButton_clicked();

    void on_action10_Closet_triggered();

    //void on_editMenu_clicked();

    void on_listWidget_item_itemDoubleClicked(QListWidgetItem *item);

    //void on_editMenuInput_returnPressed();


    void on_SubmitChange_clicked();

signals:
    void isAdmin();

private:
    Ui::MainWindow *ui;
    Signin *signin;
    ClosestTrip *tripFromSaddleback;
    QList<restaurant> restaurantList;
    bool admin = false;
};
#endif // MAINWINDOW_H
