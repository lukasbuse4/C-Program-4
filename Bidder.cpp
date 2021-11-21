//lukasbuse
#include "Bidder.h"
//constructor
//Bidder Bidder2();
//Bidder2.setItemNum(AD-104);
//Bidder2.setBidId(100);
//Bidder2.setBidAmt(400.00);
Bidder::Bidder(){}
//Bidder Bidder1(AD-104, 100, 400.00);
Bidder::Bidder(string item, int id, double amt){
    itemNum = item;
    bidID = id;
    bidAmt = amt;
}
string Bidder::getItemNum() {
    return itemNum;
}
void Bidder::setItemNum(string item) {
    itemNum = item;
}
int Bidder::getBidID(){return bidID;
}
void Bidder:: setBidID(int id) {
    bidID = id;
}
double Bidder:: getBidAmt(){
    return bidAmt;
}
void Bidder:: setBidAmt(double amt){
    bidAmt= amt;
}
