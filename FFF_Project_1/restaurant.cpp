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

void restaurant::getDistanceList(QVector<distanceInfo>& aList) const
{
    aList = distanceList;
}

float restaurant::getDistanceToSaddleback() const
{
    return distanceToSaddleback;
}

void restaurant::getMenu(QList<menuItem>& aMenu) const
{
    aMenu = menu;
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
