//lukasbuse
#ifndef PROGRAM4_BIDDER_H
#define PROGRAM4_BIDDER_H
#include <string>
using namespace std;

class Bidder{

public:
//constructor
    Bidder();
    Bidder(string, int, double);
//getters and setters
//member functions
    string getItemNum();
    void setItemNum(string);int getBidID();
    void setBidID(int);
    double getBidAmt();
    void setBidAmt(double);

private:
//member attributes
    string itemNum;
    int bidID;
    double bidAmt;
};
#endif //PROGRAM4_BIDDER_H


getID
setName
setID
