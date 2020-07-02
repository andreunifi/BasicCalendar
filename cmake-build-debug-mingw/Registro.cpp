//
// Created by andre on 01/07/2020.
//
#include "Registro.h"

void Register::addActivity(Date &z, Activity &n) {
    auto it=Registro.find(z);
    if(it!=Registro.end()){
        if(it->second.empty()){
            std::list<Activity> d;
            d.push_front(n);
        }else{
            it->second.push_back(n);
        }
    }else{
        std::cout<<"Il giorno specificato non ha nulla programmato"<<std::endl;
        std::list<Activity> as;
        as.push_front(n);
        Registro.insert(pair<Date,std::list<Activity>>(z,as));

    }

}

void Register::printAllActivities() const {
    for(auto it : Registro)
        for(auto iz= it.second.begin(); iz!= it.second.end(); iz++)
            iz->printInfo();

}

void Register::printSpecificDay(Date &d) const {
    auto it=Registro.find(d);
    if(it!=Registro.end()){
        for(auto ip= it->second.begin(); ip!= it->second.end(); ip++)
            ip->printInfo();
    }else{
        std::cout<<"il giorno non ha attività programmate"<<std::endl;
    }

}

void Register::removeActivity(Date &d,Activity &a) {
    auto it=Registro.find(d);
    if(it!=Registro.end()){
        it->second.remove(a);
    }else{
        std::cerr<< "Activity non trovata..." << std::endl;
    }

}

