#include "Date.h"

#include <iostream>
using std::cout;
using std::endl;
#include <string.h>
using namespace std;

Date::Date(){
    this->day=1;
    this->month=1;
    this->year=1900;
}

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date(){
    cout << "Memoria liberada..." << endl;    
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

string Date::getDayName(string dayName){
    return "Date name";
}

string Date::getMonthName(){
    return "Month name";
}

string Date::toString(string texto){
    return "to String";
}
