//
// Created by andre on 30/06/2020.
//

#include "Date.h"
Date Date::generateRandomdate() {
    Date ad;
    do{
        srand(time(0));
        ad= new Date(rand()%32,rand()%13,rand()%10000,rand()%24,rand()%60,rand()%60);
    }while(ad.IsAValidDate());
        return ad;

}



bool Date::operator<(const Date &rhs) const {
    if (day < rhs.day)
        return true;
    if (rhs.day < day)
        return false;
    if (month < rhs.month)
        return true;
    if (rhs.month < month)
        return false;
    if (year < rhs.year)
        return true;
    if (rhs.year < year)
        return false;
    if (hour < rhs.hour)
        return true;
    if (rhs.hour < hour)
        return false;
    if (minute < rhs.minute)
        return true;
    if (rhs.minute < minute)
        return false;
    return seconds < rhs.seconds;
}

bool Date::operator>(const Date &rhs) const {
    return rhs < *this;
}

bool Date::operator<=(const Date &rhs) const {
    return !(rhs < *this);
}

bool Date::operator>=(const Date &rhs) const {
    return !(*this < rhs);
}

void Date::setdate(int i, int j, int k) {
    Date::setDay(i);
    Date::setMonth(j);
    Date::setYear(k);

}

void Date::setTimeofDay(int l, int m, int n) {
    Date::setHour(l);
    Date::setMinute(m);
    Date::setSeconds(n);
}
bool Date::IsAValidDate() {
    isvalidDate = true;
    if(!(Date::year >= 1600 && Date::year <=2100))
        isvalidDate = false;

    if(Date::day < 1)
        isvalidDate = false;

    switch(Date::month)
    {
        case 2:
            if(((Date::year % 100 != 0 && Date::year % 4 == 0) || (Date::year % 400 == 0))){
                if(Date::day > 29)
                    isvalidDate = false;
                }else{
                if (Date::day > 28)
                    isvalidDate = false;
            }
                    break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(Date::day > 31)
                isvalidDate = false;
            break;
        case 4: case 6: case 9: case 11:
            if(Date::day > 30)
                isvalidDate = false;
            break;
        default:
            isvalidDate = false;
            break;
    }
    if(!isvalidDate) {
        throw InvalidDateException("Data errata");
    }else{
        return isvalidDate;
    }
}

Date Date::operator=(Date *rhs) {
    setdate(rhs->day,rhs->month,rhs->year);
    setTimeofDay(rhs->hour,rhs->minute,rhs->seconds);
    return *this;
}

bool Date::operator==(const Date &rhs) const {
    if(year==rhs.year && month==rhs.month && day==rhs.day && hour==rhs.hour && minute==rhs.minute && seconds==rhs.seconds){
        return true;
    }else{
        return false;
    }

}

