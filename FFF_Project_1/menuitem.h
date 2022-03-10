#ifndef MENUITEM_H
#define MENUITEM_H

#include <QString>

class MenuItem
{
private:
    QString itemName;
    double itemPrice;
    int itemQuantity;

public:
    MenuItem();
    MenuItem(QString name, double price, int quantity);
    QString getItemName();
    double getItemPrice();
    int getItemQuantity();
    void setPrice(double price);
    void setItemQuantity(int quantity);
    void setItemName(QString name);
    void changePrice(double newPrice);  // change price of an item
    void increaseItem();    // increase quantity of item
    void decreaseItem();    // decrease quantity of item
};

#endif // MENUITEM_H
