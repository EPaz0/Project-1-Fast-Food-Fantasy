#include "restaurant.h"

restaurant::restaurant(){}

QString restaurant::getRestaurantName() const
{
    return restaurantName;
}

int restaurant::getRestaurantNumber() const
{
    return restaurantNumber;
}

QVector<distanceInfo> restaurant::getDistanceList() const
{
    return distanceList;
}

float restaurant::getDistanceToSaddleback() const
{
    return distanceToSaddleback;
}

QList<menuItem> restaurant::getMenu() const
{
    return menu;
}

void restaurant::setRestaurantName(QString aRestaurantName)
{
    restaurantName = aRestaurantName;
}
void restaurant::setRestaurantNumber(int aRestaurantNumber)
{
    restaurantNumber = aRestaurantNumber;
}
void restaurant::setDistanceList(QVector<distanceInfo>& aList)
{
    distanceList = aList;
}
void restaurant::setDistanceToSaddleback(float aDistanceToSaddleback)
{
    distanceToSaddleback = aDistanceToSaddleback;
}
void restaurant::setMenu(QList<menuItem>& aMenu)
{
    menu = aMenu;
}

restaurant::~restaurant(){}
