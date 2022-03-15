#include "shorttesttripfromdomino.h"
#include "ui_shorttesttripfromdomino.h"

ShorttestTripFromDomino::ShorttestTripFromDomino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShorttestTripFromDomino)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));
    connect(this,SIGNAL(backMain()), parent, SLOT(show()));


    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);

    if (!db.open())
    {
        qDebug() << "problem opening database";
    }
    ui->listWidget->clear();
}

ShorttestTripFromDomino::~ShorttestTripFromDomino()
{
    delete ui;
}

void ShorttestTripFromDomino::isAdmin()
{
  admin = true;
}


// return to main action
void ShorttestTripFromDomino::on_pushButton_3_clicked()
{
    db.close();
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    hide();
    if(admin == true)
        emit Admin();
    else
        emit backMain();
}


// this is the action set when the button "Start" is clicked
// purpose: display number of restaurant specifies in order, diplay total distance
void ShorttestTripFromDomino::on_pushButton_start_clicked()
{
       // START -- re-initializing widgets, total spending
       ui->listWidget->clear();
       ui->lineEdit_totalDistance->clear();
       ui->lineEdit_totalOnRest->clear();
       ui->lineEdit_totalSpentTrip->clear();
       ui->listWidget_menu->clear();
       ui->listWidget_price->clear();
       ui->listWidget_cartItem->clear();
       ui->listWidget_cartPrice->clear();
       ui->name->clear();
       totalSpendingOnTrip = 0;
       // END -- initializing widgets, total spending

       if (ui->lineEdit_noOfRes->text().toInt() <= 10 && ui->lineEdit_noOfRes->text().toInt() > 0)  // check for in-range input
       {
           int numberOfRestaurant;
           numberOfRestaurant = ui->lineEdit_noOfRes->text().toInt();

           QString stringQry;
           QString restaurant;


           int res1ID = 3;
           ui->listWidget->addItem("Domino's Pizza");
           int res2ID = 0;
           QString res2NAME;
           QString extractedValues = "";  // restaurants already added

           for (int i = 0; i < numberOfRestaurant - 1; i++)
           {
               stringQry = "SELECT toRestaurant, MIN(distance) FROM distances WHERE fromRestaurant = " + QString::number(res1ID) + " AND toRestaurant NOT IN (" + extractedValues + ")";

               qry.prepare(stringQry);
               if (qry.exec())
               {
                   while (qry.next())
                   {
                       res2ID = qry.value(0).toInt();
                   }
               }
               else
                   qDebug() << "failed";
               res2NAME = GetRestaurantNameUsingQSL(res2ID);
               if (extractedValues.length()==0)
                   extractedValues += QString::number(res1ID);
               else
                   extractedValues = extractedValues + "," + QString::number(res1ID);
               res1ID = res2ID;
               ui->listWidget->addItem(res2NAME);
           }


           // display total distance
            QString name;
            int restaurantID1;
            int restaurantID2;
            float totalDistance = 0;

            qry.prepare("SELECT distanceToSaddleback FROM restaurantList WHERE id = 3");
            if (qry.exec())
            {
                while (qry.next())
                {
                    totalDistance += qry.value(0).toFloat();
                }
            }


           for (int i = 0; i < ui->listWidget->count() - 1; i++)
           {
               QListWidgetItem* item1 = ui->listWidget->item(i);
               name = item1->text();
               name = AddApostropheToString(name);
               restaurantID1 = GetRestaurantIDUsingQSL(name);

               QListWidgetItem* item2 = ui->listWidget->item(i + 1);
               name = item2->text();
               name = AddApostropheToString(name);
               restaurantID2 = GetRestaurantIDUsingQSL(name);

               stringQry = "SELECT distance FROM distances WHERE fromRestaurant = " + QString::number(restaurantID1) + " AND toRestaurant = " + QString::number(restaurantID2);
               qry.prepare(stringQry);
               if (qry.exec())
               {
                   while (qry.next())
                   {
                       totalDistance += qry.value(0).toFloat();
                   }
               }
           }
           ui->lineEdit_totalDistance->setText(QString::number(totalDistance) + " miles");
       }
       else
       {
           QPoint point = QPoint(geometry().left() + ui->lineEdit_noOfRes->geometry().left(),
                                 geometry().top() + ui->lineEdit_noOfRes->geometry().bottom());

           ui->lineEdit_noOfRes->clear();  // clear the invalid input
           QToolTip::showText(point,"Please enter a number 1-10");  // show error message
       }
}

QString ShorttestTripFromDomino::AddApostropheToString(QString restaurantname)
{
    // change to sql query format when string contains apostrophe (need to add one more ' to the query)
    if (restaurantname == "MacDonald's")
        restaurantname = "MacDonald''s";
    if (restaurantname == "Domino's Pizza")
        restaurantname = "Domino''s Pizza";
    if (restaurantname == "Wendy's")
        restaurantname = "Wendy''s";
    if (restaurantname == "Papa John's Pizza")
        restaurantname = "Papa John''s Pizza";
    return restaurantname;
}

int ShorttestTripFromDomino::GetRestaurantIDUsingQSL(QString name)
{
    int id = 0;
    QString stringQry = "SELECT id FROM restaurantList WHERE restaurantName = '" + name + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            id = qry.value(0).toInt();
        }
    }
    return id;
}

QString ShorttestTripFromDomino::GetRestaurantNameUsingQSL(int id)
{
    QString name;
    QString stringQry = "SELECT restaurantName FROM restaurantList WHERE id = " + QString::number(id);
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            name = qry.value(0).toString();
        }
    }
    return name;
}


// this is the action set when "choose" button is clicked
// purpose: display menu (item and prices)
void ShorttestTripFromDomino::on_pushButton_4_clicked()
{
    if (ui->listWidget->selectedItems().size() != 0)  // check if restaurant is selected or not
    {
        ui->listWidget_menu->clear();
        ui->listWidget_price->clear();
        ui->listWidget_cartItem->clear();
        ui->listWidget_cartPrice->clear();
        ui->lineEdit_totalOnRest->clear();


        QString restaurantname = ui->listWidget->currentItem()->text();
        ui->name->setText(restaurantname); // display restaurant  name
        restaurantname = AddApostropheToString(restaurantname);


        int restaurantId = GetRestaurantIDUsingQSL(restaurantname);


        // display menu and price
        QString menuItem;
        QString price;
        QString stringQry;
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

}


// this is the action set when "add" button is clicked
// purpose: add menuitem to cart
void ShorttestTripFromDomino::on_pushButton_clicked()
{
    if (ui->listWidget_menu->selectedItems().size() != 0)
    {
        ui->lineEdit_totalOnRest->clear();

         QString currentItem = ui->listWidget_menu->currentItem()->text();
         QListWidgetItem* item = new QListWidgetItem(currentItem);
         ui->listWidget_cartItem->addItem(item);   // add menu item name to cart widget

         QString restaurantname = ui->listWidget->currentItem()->text();
         // change to sql query format when string contains apostrophe
         restaurantname = AddApostropheToString(restaurantname);

         int restaurantId = GetRestaurantIDUsingQSL(restaurantname);

         float price = 0;  // get the price, having menuitem and restaurant id
         QString stringQry;
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
}


// this is the action set when "remove" button is clicked
// purpose: delete menuitem from cart
void ShorttestTripFromDomino::on_pushButton_2_clicked()
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


void ShorttestTripFromDomino::on_pushButton_5_clicked()
{
    float totalSpentOnRestaurant = 0.0;
    for (int i = 0; i < ui->listWidget_cartPrice->count(); i++)
    {
        QListWidgetItem* item = ui->listWidget_cartPrice->item(i);
        totalSpentOnRestaurant += item->text().toFloat();
    }

    ui->lineEdit_totalOnRest->setText("$" + QString::number(totalSpentOnRestaurant));

    totalSpendingOnTrip += totalSpentOnRestaurant;  // add total spent on this restaurant to total spent on trip
    ui->lineEdit_totalSpentTrip->setText("$" + QString::number(totalSpendingOnTrip));  // update/display total spent on trip

    ui->listWidget_cartItem->clear();
    ui->listWidget_cartPrice->clear();
}

