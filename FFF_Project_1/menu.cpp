#include "menu.h"

Menu::Menu()
{}

QVector<MenuItem> Menu::getMenuList()
{
    return menuList;
}

void Menu::addItem(MenuItem itemToAdd)
{
    menuList.push_back(itemToAdd);
}

void Menu::removeItem(MenuItem itemToRemove)
{
    for (QList<MenuItem>::iterator i = menuList.begin(); i != menuList.end(); i++)
    {
        if (i->getItemName() == itemToRemove.getItemName())
        {
            menuList.erase(i);
            break;
        }
    }
}

