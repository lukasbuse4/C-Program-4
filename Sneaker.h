//lukasbuse
#ifndef PROGRAM4_SNEAKER_H
#define PROGRAM4_SNEAKER_H

#include <string>
#include "Bidder.h"

using namespace std;

class Sneaker{
public:
//constructor
    Sneaker();
    Sneaker(string, string, double);
//getters and setters
//member functions
    string getItemNum();
    void setItemNum(string);
    string getItemName();
    void setItemName(string);
    double getMinBid();
    void setMinBid(double);

private:
//member attributes
    string itemNum;
    string itemName;
    double minBid;
};
#endif //PROGRAM4_SNEAKER_H
