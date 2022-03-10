#include "closesttrip.h"
#include "ui_closesttrip.h"


ClosestTrip::ClosestTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClosestTrip)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));
}

ClosestTrip::~ClosestTrip()
{
    delete ui;
}

void ClosestTrip::on_pushButton_3_clicked()
{
    hide();
    emit Admin();
}

