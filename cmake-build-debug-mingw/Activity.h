//
// Created by andre on 01/07/2020.
//

#ifndef UNTITLED_ACTIVITY_H
#define UNTITLED_ACTIVITY_H
#include <iostream>
#include "Date.h"
using namespace std;
class Activity{
private:
    string description_name;
    Date startdate;
    Date enddate;
public:
    Activity()= default;
    Activity(string &n,Date &s, Date &e){
        description_name=n;
        startdate=s;
        enddate=e;
    };
    void printInfo() const{
        cout<<description_name<<endl;
        startdate.printDate();
        enddate.printDate();

    }


};
#endif //UNTITLED_ACTIVITY_H
