#include "Date.h"
#include "Time.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){

    Date date;
    Time time;
    time.setMin(4);
    time.setHour(5);
    date.setDay(3);
    cout << date.getDay() << endl;
    cout << "Hora: " << time.getHour() << " " << "Minutos: " << time.getMin() << endl;
    return 0;

}

