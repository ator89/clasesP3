#ifndef TIME_H
#define TIME_H

#include <string>
using std::string;

class Time{
    private:
        int hour;
        int min;

    public:
        //Constructor y destructor
        Time();
        ~Time();
        Time(int,int);

        //getters and setters
        void setHour(int);
        int getHour();

        void setMin(int);
        int getMin();
 
        string getDayName();
       
        string toString();
        //timeDiff
};

#endif

