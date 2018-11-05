#include "Time.h"

#include <string>
using std::string;

Time::Time(){
    hour = 0;
    min = 0;
}

Time::Time(int hour, int min){
    this->hour = hour;
    this->min = min;
}

void Time::setHour(int hour){
    this->hour = hour;
}

int Time::getHour(){
    return hour;
}

void Time::setMin(int min){
    this->min = min;
}

int Time::getMin(){
    return min;
}

Time::~Time(){}

string Time::toString(){
    return "Hola mundo";
}

string Time::getDayName(){
    return "Dia de la semana";
}
