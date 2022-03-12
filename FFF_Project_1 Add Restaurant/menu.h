#ifndef MENU_H
#define MENU_H
#include <QVector>
#include <menuitem.h>
#include <algorithm>
using namespace std;


class Menu
{
private:
    QVector<MenuItem> menuList;                   // a menu of a single restaurant - list of all MenuItem
public:
    Menu();
    QVector<MenuItem> getMenuList();
    void addItem(MenuItem itemToAdd);             // add item to this menu
    void removeItem(const MenuItem itemToRemove); // delete item from this menu (sort by name of item)
};

#endif // MENU_H
