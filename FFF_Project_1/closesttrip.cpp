#include "closesttrip.h"
#include "ui_closesttrip.h"


ClosestTrip::ClosestTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClosestTrip)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));

    // import the table already created
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\sql\\restaurant.sqlite");
    if (!db.open())
    {
        qDebug() << "problem opening database";
    }

    QString item;

    // test sql - display info on closest trip list
    QSqlQuery qry;
    qry.prepare("select restaurantName from restaurantList");

    if (qry.exec())
    {
        while (qry.next())
        {
            item = qry.value(0).toString();
             ui->listWidget->addItem(item);
        }
    }


    db.close();
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

