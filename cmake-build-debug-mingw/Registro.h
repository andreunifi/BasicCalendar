//
// Created by andre on 01/07/2020.
//
#include <iostream>
#include "Date.h"
#include "Activity.h"
#include <map>
#include <list>

#ifndef UNTITLED_REGISTRO_H
#define UNTITLED_REGISTRO_H
class Register{
private:
    map<Date,std::list<Activity>> Registro;
public:
    Register(){};
    void addActivity(Date &z,Activity &n);
    void printAllActivities()const;
    void printSpecificDay(Date &d)const;
    void removeActivity(Date &d,Activity &a);

};
#endif //UNTITLED_REGISTRO_H
