#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "menu.h"
#include <QString>


#endif // RESTAURANT_H

// represents each item in the distancesToOthersList of the Restaurant class
// holding name of 1 other restaurant and distance from that restaurant to this current restaurant
struct DistanceByRestaurant {
    QString otherRestaurantName;
    double distanceToRestaurant;
};


class Restaurant {
private:
    QString restaurantName;
    QVector<DistanceByRestaurant> distancesToOthersList;// list of distance to other restaurants
    double distanceFromSaddleback;          // distance to Saddleback
    Menu menu;                              // menu of this restaurant

public:
    Restaurant();

    double GetDistancesFromSaddleback();  // get the distance of this restaurant to Saddleback
    QVector<DistanceByRestaurant> getDistancesToOthers(); // get the list of other restaurants and their distances
    QString GetRestaurantName();          // get the name of this restaurant
    Menu GetMenu();                       // get the menu of this restaurant


    void setDistancesToSaddleback(double distance);// set the distance to Saddleback
    void setRestaurantName(QString name);          // set the restaurant name
    void addOtherRestaurantDistance(DistanceByRestaurant pair); // add 1 other restaurant and its distance to the distance list


    void DisplayMenu();                   // display the menu of this restaurant
    void DisplayDisToSaddleback();        // display the distance to Saddleback
    void DisplayDisToOthers();            // display the distance to 9 other restaurants
};
