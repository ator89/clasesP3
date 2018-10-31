#include "Time.h"

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

void Time::getHour(){
    return hour;
}

void Time::setMin(int min){
    this->min;
}

void Time::getMin(){
    return min;
}


