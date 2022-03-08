#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"

#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QFileDialog>

#include <iostream>
#include <fstream>
#include <string>

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

    void on_restaurantView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void BuildWindow();
    void DatabaseConnect();
    void DatabaseInit();
    void DatabasePopulate();
    Signin *signin;
    std::string fileName;
    QString sortBy;
    QString criteria;
    QSqlQueryModel* model;
    int row;
};
#endif // MAINWINDOW_H
