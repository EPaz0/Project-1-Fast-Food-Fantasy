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
    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);

    if (!db.open())
    {
        qDebug() << "problem opening database";
    }

    QString item;

    // test sql - display info on closest trip list, from closest to furthest
    QSqlQuery qry;
    qry.prepare("SELECT restaurantName FROM restaurantList ORDER BY distancetoSaddleback");

    if (qry.exec())
    {
        while (qry.next())
        {
            item = qry.value(0).toString();
             ui->listWidget->addItem(item);
        }
    }

    db.close();
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
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

