#include "menuitem.h"

MenuItem::MenuItem()
{
    itemName = "";
    itemPrice = 0.0;
    itemQuantity = 0;
}

MenuItem::MenuItem(QString name, double price, int quantity)
{
    itemName = name;
    itemPrice = price;
    itemQuantity = quantity;
}

QString MenuItem::getItemName()
{
    return itemName;
}

double MenuItem::getItemPrice()
{
    return itemPrice;
}

int MenuItem::getItemQuantity()
{
    return itemQuantity;
}

void MenuItem::setPrice(double price)
{
    itemPrice = price;
}

void MenuItem::setItemQuantity(int quantity)
{
    itemQuantity = quantity;
}

void MenuItem::setItemName(QString name)
{
    itemName = name;
}

void MenuItem::changePrice(double newPrice)
{
    itemPrice = newPrice;
}

void MenuItem::increaseItem()
{
    itemQuantity++;
}

void MenuItem::decreaseItem()
{
    itemQuantity--;
}
