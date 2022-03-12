#include "closesttrip.h"
#include "ui_closesttrip.h"


ClosestTrip::ClosestTrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClosestTrip)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));

    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    if (!db.open())
    {
        qDebug() << "problem opening database";
    }


    QString restaurant;

    // display info on closest trip list, order from closest to furthest
    qry.prepare("SELECT restaurantName FROM restaurantList ORDER BY distancetoSaddleback");

    if (qry.exec())
    {
        while (qry.next())
        {
            restaurant = qry.value(0).toString();
             ui->listWidget->addItem(restaurant);  // add each restaurant to the widget
        }
    }
}

ClosestTrip::~ClosestTrip()
{
    db.close();
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    delete ui;
}


void ClosestTrip::on_pushButton_3_clicked()
{
    hide();
    emit Admin();
}


void ClosestTrip::on_pushButton_4_clicked()
{
    ui->listWidget_menu->clear();
    ui->listWidget_price->clear();
    ui->listWidget_cartItem->clear();
    ui->listWidget_cartPrice->clear();


    QString restaurantname = ui->listWidget->currentItem()->text();
    ui->name->setText(restaurantname); // display restaurant  name

    // change to sql query format when string contains apostrophe (need to add one more ' to the query)
    if (restaurantname == "MacDonald's")
        restaurantname = "MacDonald''s";
    if (restaurantname == "Domino's Pizza")
        restaurantname = "Domino''s Pizza";
    if (restaurantname == "Wendy's")
        restaurantname = "Wendy''s";
    if (restaurantname == "Papa John's Pizza")
        restaurantname = "Papa John''s Pizza";


    int restaurantId;
    // get restaurant's id number for the restaurant name, use restaurantList table
    QString stringQry = "SELECT id FROM restaurantList WHERE restaurantName = '" + restaurantname + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            restaurantId = qry.value(0).toInt();
        }
    }


    // display menu and price
    QString menuItem;
    QString price;
    stringQry = "SELECT * FROM menu WHERE restaurantID = " + QString::number(restaurantId);
    qry.prepare(stringQry);  // pass the stringQry to the SQL query
    if (qry.exec())
    {
        while (qry.next())
        {
            menuItem = qry.value(1).toString();   // in here, 1 specifies column 2 of menu table (item)
            ui->listWidget_menu->addItem(menuItem); // add menu item to the listWidget_menu
            price = qry.value(2).toString();    // in here, 2 specifies column 3 of menu table (price)
            ui->listWidget_price->addItem("$" + price);  // add price to the listWidget_price
        }
    }

}


// this is the action set when "add" button is clicked
// purpose: add menuitem to cart
void ClosestTrip::on_pushButton_clicked()
{
    QString currentItem = ui->listWidget_menu->currentItem()->text();
    QListWidgetItem* item = new QListWidgetItem(currentItem);
    ui->listWidget_cartItem->addItem(item);   // add menu item name to cart widget

    QString restaurantname = ui->listWidget->currentItem()->text();
    // change to sql query format when string contains apostrophe
    if (restaurantname == "MacDonald's")
        restaurantname = "MacDonald''s";
    if (restaurantname == "Domino's Pizza")
        restaurantname = "Domino''s Pizza";
    if (restaurantname == "Wendy's")
        restaurantname = "Wendy''s";
    if (restaurantname == "Papa John's Pizza")
        restaurantname = "Papa John''s Pizza";

    int restaurantId;
    // get restaurant's id number from restaurant name
    QString stringQry = "SELECT id FROM restaurantList WHERE restaurantName = '" + restaurantname + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            restaurantId = qry.value(0).toInt();
        }
    }

    float price;  // get the price, having menuitem and restaurant id
    stringQry = "SELECT price FROM menu WHERE restaurantID = '" + QString::number(restaurantId) + "'" + " AND item = '" + currentItem + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            price = qry.value(0).toFloat();
        }
    }


    ui->listWidget_cartPrice->addItem(QString::number(price));   // add price to cart widget
}


// this is the action set when "remove" button is clicked
// purpose: delete menuitem from cart
void ClosestTrip::on_pushButton_2_clicked()
{
    QList<QListWidgetItem*> items = ui->listWidget_cartItem->selectedItems();

    foreach(QListWidgetItem* item, items){
        int row = ui->listWidget_cartItem->row(item);
        QListWidgetItem* itemPrice = ui->listWidget_cartPrice->item(row);
        ui->listWidget_cartItem->removeItemWidget(item);
        ui->listWidget_cartPrice->removeItemWidget(itemPrice);
        delete item;
        delete itemPrice;
    }
}

