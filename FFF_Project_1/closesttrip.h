#ifndef CLOSESTTRIP_H
#define CLOSESTTRIP_H

#include <QDialog>
#include <QWidget>
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

private:
    Ui::ClosestTrip *ui;
};

#endif // CLOSESTTRIP_H
