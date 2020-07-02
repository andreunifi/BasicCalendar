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
    string name;
    string description_name;
    Date startdate;
    Date enddate;
public:
    Activity()= default;
    Activity(const string &a,const string &n,const Date &s, const Date &e): name(a),description_name(n),startdate(s),enddate(e){
    };
    void printInfo() const{
        cout<<name<<endl;
        cout<<description_name<<endl;
        startdate.printDate();
        enddate.printDate();

    }
    bool operator==(const Activity &c){
        if(this->name==c.name && this->startdate==c.startdate && this->enddate==c.enddate){
            return true;
        }else{
            return false;
        }
    }


};
#endif //UNTITLED_ACTIVITY_H
