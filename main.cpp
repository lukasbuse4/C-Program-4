//lukasbuse
#include <iostream>
#include <fstream>
#include <vector>
#include "Sneaker.h"
#include "Bidder.h"
#include "Sneaker.h"
using namespace std;

int main() {

    //open bidder file
    ifstream bidderFile;
    bidderFile.open("../Bidders.txt");

    //check to make sure bidder file is open
    if (!bidderFile.is_open()) {
        cout << "Bidder File Not Found" << endl;
    }

    //open sneaker file
    ifstream sneakerFile;
    sneakerFile.open("../Sneakers.txt");

    //check to make sure sneaker file is open
    if (!sneakerFile.is_open()) {
        cout << "Sneaker File Not Found" << endl;
    }

    //declare variables
    string itemNum;
    int bidID;
    double bidAmt;
    string itemName;
    string x; //dummy variable
    vector<Bidder> bidVect;
    vector<Sneaker> sneakerVec;
    Bidder bidder;
    Sneaker sneaker;

    //take in bidder data
    while (!bidderFile.eof()) {

        getline(bidderFile, itemNum, ',');
        bidder.setItemNum(itemNum);
        getline(bidderFile, x, ',');
        bidID = stoi(x);
        bidder.setBidID(bidID);
        getline(bidderFile, x);
        bidAmt = stoi(x);
        bidder.setBidAmt(bidAmt);
        Bidder tempBid(itemNum, bidID, bidAmt);
        bidVect.push_back(tempBid);
        //bidVect.at(i).getBidID();

    }//end of while


    //read in sneaker data
    while (!sneakerFile.eof()) {

        getline(sneakerFile, itemNum, ',');
        sneaker.setItemNum(itemNum);
        getline(sneakerFile, x, ',');
        itemName = x;
        sneaker.setItemName(x);
        getline(sneakerFile, x);
        bidAmt = stod(x);
        sneaker.setMinBid(bidAmt);
        Sneaker tempSneak(itemNum, itemName, bidAmt);
        sneakerVec.push_back(tempSneak);

    }//end of while
    string userNum;
    cout << "Enter the Sneaker by Item Number: ";
    getline(cin, userNum);
    //cout << "userNum: " << userNum;
    //loop for number of sneakers to display their info
    for (int i = 0; i < sneakerVec.size(); i++) {
       // cout<< sneakerVec.at(i).getItemNum()<< endl;
        if (sneakerVec.at(i).getItemNum() == userNum) {
            for (int y = 0; y < bidVect.size(); y++) {

                 if ((bidVect.at(y).getBidAmt() >= sneakerVec.at(i).getMinBid()) && (bidVect.at(y).getItemNum()== userNum)) {

                    cout << sneakerVec.at(i).getItemNum() << "," << bidVect.at(y).getBidID() << "," << bidVect.at(y).getBidAmt()<< "," << sneakerVec.at(i).getItemName() << endl;

                }//end if

            }//end inner for

        }


    }//end main
}