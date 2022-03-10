#ifndef RESTAURANT_H
#define RESTAURANT_H

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
    void getDistanceList(QVector<distanceInfo>& aList) const;
    float getDistanceToSaddleback() const;
    void getMenu(QList<menuItem>& aMenu) const;
    void setRestaurantName(QString aRestaurantName);
    void setRestaurantNumber(int aRestaurantNumber);
    void setDistanceList(QVector<distanceInfo>& aList);
    void setDistanceToSaddleback(float aDistanceToSaddleback);
    void setMenu(QList<menuItem>& aMenu);
    ~restaurant();

private:
    QString restaurantName;
    int restaurantNumber;
    QVector<distanceInfo> distanceList;
    float distanceToSaddleback;
    QList<menuItem> menu;
};

#endif // RESTAURANT_H
