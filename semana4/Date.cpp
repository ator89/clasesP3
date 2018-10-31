#include "Date.h"

Date::Date(){
    this->day=0;
    this->month=0;
    this->year=0;
}

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDay(int day){
    this->day = day;
}

int Date::getDay(){
    return day;
}

void Date::setMonth(int month){
    this->month = month;
}

int Date::getMonth(){
    return month;
}

void Date::setYear(int year){
    this->year = year;
}

int Date::getYear(){
    return year;
}

std::string Date::getDayName(){
    return "Date name";
}

std::string Date::getMonthName(){
    return "Month name";
}

std::string Date::toString(){
    return "to String"
}
