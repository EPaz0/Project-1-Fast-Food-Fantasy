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
#include <QtSql>
#include "signin.h"
#include "closesttrip.h"
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

private slots:
    void on_actionLog_in_triggered();

    void Admin();

    void on_actionLog_out_triggered();

    void on_pushButton_clicked();

    void on_action10_Closet_triggered();

private:
    Ui::MainWindow *ui;
    Signin *signin;
    ClosestTrip *tripFromSaddleback;
    QList<restaurant> restaurantList;
};
#endif // MAINWINDOW_H
