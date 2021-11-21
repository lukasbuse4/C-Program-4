//lukasbuse
#include "Sneaker.h"
#include "Bidder.h"
//constructor
//Sneaker Sneaker2();

Sneaker::Sneaker(){}
Sneaker::Sneaker(string item, string name, double amt){
    itemNum = item;
    itemName = name;
    minBid = amt;
}

string Sneaker::getItemNum() {
    return itemNum;
}
void Sneaker::setItemNum(string item) {
    itemNum = item;
}
string Sneaker::getItemName(){return itemName;
}
void Sneaker:: setItemName(string name) {
    itemName = name;
}
double Sneaker::getMinBid(){
    return minBid;
}
void Sneaker::setMinBid(double amt){
    minBid = amt;
}
