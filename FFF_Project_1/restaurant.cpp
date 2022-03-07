#include "mainwindow.h"

Restaurant::Restaurant()
{
    distanceFromSaddleback = 0;
}

QString Restaurant::GetRestaurantName()
{
    return restaurantName;
}


double Restaurant::GetDistancesFromSaddleback()
{
    return distanceFromSaddleback;
}

Menu Restaurant::GetMenu()
{
    return menu;
}

void Restaurant::setRestaurantName(QString name)
{
    restaurantName = name;
}


void Restaurant::setDistancesToSaddleback(double distance)
{
    distanceFromSaddleback = distance;
}


void Restaurant::addOtherRestaurantDistance(DistanceByRestaurant pair)
{
    distancesToOthersList.push_back(pair);
}


void DisplayMenu()
{
    // display menu (display name of item and price of item) - will add after we have data

}

void DisplayDisToSaddleback()
{
    // display distance from Saddleback - will add after we have data
}

