#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "signin.h"
#include "Restaurant.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QList<Restaurant> restaurantList;  // list of all restaurant

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionLog_in_triggered();

    void Admin();

    void on_actionLog_out_triggered();

private:
    Ui::MainWindow *ui;
    Signin *signin;
};
#endif // MAINWINDOW_H