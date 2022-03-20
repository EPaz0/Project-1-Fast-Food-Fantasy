#ifndef CUSTOMTRIP_H
#define CUSTOMTRIP_H

#include <QDialog>
#include <QWidget>
#include <QtSql>
#include <QList>
#include "endwindow.h"

namespace Ui {
class customtrip;
}

class customtrip : public QDialog
{
    Q_OBJECT

public:
    explicit customtrip(QWidget *parent = nullptr);
    QString AddApostropheToString(QString name);
    int GetRestaurantIDUsingQSL(QString name);
    QString GetRestaurantNameUsingQSL(int id);
    ~customtrip();

signals:
   void Admin();
   void backMain();
   void AdminCheck();

private slots:
   void isAdmin();

   void on_pushButton_3_clicked();

   void on_pushButton_6_clicked();

   void on_pushButton_9_clicked();

   void on_pushButton_10_clicked();

   void on_pushButton_4_clicked();

   void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void on_pushButton_5_clicked();

private:
    Ui::customtrip *ui;
    endwindow *endWindow;
    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery qry;
    float totalSpendingOnTrip = 0.0;
    bool admin = false;
    QList<QString> list;
};

#endif // CUSTOMTRIP_H
