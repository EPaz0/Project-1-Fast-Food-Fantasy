#include "mainwindow.h"
#include <QtSql/QtSql>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
        db = QSqlDatabase::addDatabase(DRIVER);


    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);

    //db.setDatabaseName("c:\\sql\\restaurant.sqlite");


    if (!db.open())
    {
        qDebug() << "problem opening database";
    }


    // ****************************************************************************
    // NOTE: the following code of this file is for creating SQL database
    // ****************************************************************************


    QSqlQuery query("drop table if exists restaurantList");
    if(!query.isActive())
        qWarning() << "ERROR: drop table restaurantlist" << query.lastError().text();

    if (!query.exec("drop table if exists menu"))
        qWarning() << "ERROR: drop table menu" << query.lastError().text();

    if(!query.exec("drop table if exists distances"))
        qWarning() << "ERROR: drop table distance" << query.lastError().text();

    if(!query.exec("CREATE TABLE IF NOT EXISTS restaurantList (id INTEGER PRIMARY KEY, restaurantName TEXT, distanceToSaddleback FLOAT)"))
        qWarning() << "ERROR: create table restaurantlist" << query.lastError().text();

    if(!query.exec("INSERT INTO restaurantList VALUES(1, 'MacDonald''s', 8),(2, 'Chipotle', 4.29),(3,'Domino''s Pizza', 12.41),(4, 'KFC', 7.56),(5,'Subway',2.67),(6,'In-N-Out Burger',5.94),(7,'Wendy''s',8.44),(8,'Jack in the Box',12.75),(9,'El Pollo Loco',9.19),(10,'Papa John''s Pizza',14.54)"))
      qWarning() << "ERROR: insert into restautantlist " << query.lastError().text();

    if(!query.exec("CREATE TABLE menu (restaurantID INTEGER, item TEXT, price FLOAT, UNIQUE(restaurantID, item))"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(1, 'Big Mac', 3.99),(1,'French Fries',2.95),(1,'Hamburger',1.79),(1,'Double Cheeseburger',4.29),(1,'Cheeseburger', 2.29),(1,'Quarter Pounder with Cheese',4.99),(1,'Filet-O-Fish',3.33),(1,'McRib', 4.97)"))
      qWarning() << "ERROR: insert into menu " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(2,'Veggie taco',5.99),(2,'Veggie burrito',7.99),(2,'Steak taco', 3.99),(2,'Steak burrito', 8.99),(2,'Chicken taco', 4.99),(2,'Chicken burrito', 6.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(3,'Veggie pizza',9.99),(3,'Pepperoni pizza',8.99),(3,'All meat pizza',12.99),(3,'Cheese pizza',5.99),(3,'Mushroom and pepperoni pizza',7.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(4,'Three piece original fried chicken',6.99),(4,'Bucket of crispy fried chicken ',13.99),(4,'Mashed potatoes',5.99),(4,'Cole slaw',5.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(5,'Veggie sandwich',4.99),(5,'Tuna sandwich',6.99),(5,'Italian sandwich',7.99),(5,'Turkey sandwich',5.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(6,'Hamburger',2.99),(6,'Cheeseburger',3.29),(6,'Milk shake',2.99),(6,'French fries',1.79),(6,'Medium coke',2.35)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(7,'Hamburger',3.99),(7,'Cheeseburger',4.29),(7,'Small classic chocolate Frosty',2.99),(7,'French fries',1.79),(7,'Chicken wrap',4.39)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(8,'Chicken club salad',6.99),(8,'Southwest chicken salad',7.29),(8,'Grilled chicken salad',5.99),(8,'Side salad',1.79)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(9,'Monterrey pollo salad',6.99),(9,'Steamed vegetables',3.29),(9,'Chicken tortilla soup',5.29)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES(10,'Veggie pizza',4.09),(10,'Pepperoni pizza',8.99),(10,'All meat pizza',12.99),(10,'Cheese pizza',5.99),(10,'Mushroom and pepperoni pizza',14.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("CREATE TABLE IF NOT EXISTS distances ('fromRestaurant' INTEGER, 'toRestaurant' INTEGER, 'distance' FLOAT, UNIQUE(fromRestaurant, toRestaurant))"))
            qWarning() <<  "ERROR: create table distance " << query.lastError().text();

    if(!query.exec("INSERT INTO distances VALUES(1, 2, 13.2),(1, 3 ,15.4),(1, 4, 11.5),(1, 5, 13.3),(1, 6, 15.2),(1, 7, 5.8),(1, 8, 6.9),(1, 9, 8.56),(1, 10, 3.5),(2,1, 13.2),(2, 3, 15.1),(2, 4, 14.8),(2, 5, 0.1),(2, 6, 4.2),(2, 7, 10.3),(2, 8, 9.3),(2, 9, 5.2),(2, 10, 11.0),(3,1, 15.4),(3,2, 15.1),(3,4, 4.3),(3,5, 16.1),(3,6, 14.3),(3,7, 18.4),(3,8, 18.3),(3,9, 17.2),(3,10, 17.2),(4,1, 11.5),(4,2, 14.8),(4,3, 4.3),(4,5, 8.1),(4,6, 9.4),(4,7, 14.4),(4,8, 14.3),(4,9, 13.2),(4,10, 13.2),(5,1, 13.3),(5,2, 0.1),(5,3, 16.1),(5,4, 8.1),(5,6, 4.5),(5,7, 8.5),(5,8, 8.4),(5,9, 5.2),(5,10, 12.1),(6,1, 15.2),(6,2, 4.2),(6,3, 14.3),(6,4, 9.4),(6,5, 4.5),(6,7, 8.56),(6,8, 11.1),(6,9, 5.1),(6,10, 14.2),(7,1, 5.8),(7,2, 10.3),(7,3, 18.4),(7,4, 14.4),(7,5, 8.5),(7,6, 8.56),(7,8, 0.7),(7,9, 5.8),(7,10, 4.0),(8,1, 6.9),(8,2, 9.3),(8,3, 18.7),(8,4, 14.3),(8,5, 8.4),(8,6, 11.1),(8,7, 0.7),(8,9, 5.7),(8,10, 4.7),(9,1, 8.56),(9,2, 5.2),(9,3, 17.2),(9,4, 13.2),(9,5, 5.2),(9,6, 5.1),(9,7, 5.8),(9,8, 5.7),(9,10, 9.5),(10,1, 3.5),(10,2, 11.0),(10,3, 17.2),(10,4, 13.2),(10,5, 12.1),(10,6, 14.2),(10,7, 4.0),(10,8, 4.7),(10,9, 9.5)"))
        qWarning() <<  "ERROR: " << query.lastError().text();
    db.close();

    w.show();
    return a.exec();
}
