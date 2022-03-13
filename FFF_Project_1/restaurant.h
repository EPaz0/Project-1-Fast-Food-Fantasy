#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QList>


struct distanceInfo
{
   int toWhich;
   float distance;
};
struct menuItem
{
    QString itemName;
    float itemPrice;
};

class restaurant
{
public:
    restaurant();
    QString getRestaurantName() const;
    int getRestaurantNumber() const;
    QVector<distanceInfo> getDistanceList() const;
    float getDistanceToSaddleback() const;
    QList<menuItem> getMenu() const;
    void setRestaurantName(QString aRestaurantName);
    void setRestaurantNumber(int aRestaurantNumber);
    void setDistanceList(QVector<distanceInfo>& aList);
    void setDistanceToSaddleback(float aDistanceToSaddleback);
    void setMenu(QList<menuItem>& aMenu);
    ~restaurant();

    QVector<distanceInfo> distanceList;

private:
    QString restaurantName;
    int restaurantNumber;
    float distanceToSaddleback;
    QList<menuItem> menu;
};

#endif // RESTAURANT_H
