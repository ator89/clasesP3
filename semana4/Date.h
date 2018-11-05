#ifndef DATE_H
#define DATE_H

#include <string>
using std::string;

class Date{
    private:
        int day;
        int month;
        int year;

    public:
        //Constructor y destructor
        Date();
        Date(int,int,int);        
        ~Date();
        
        //getters and setters
        void setDay(int);
        int getDay();

        void setMonth(int);
        int getMonth();

        void setYear(int);
        int getYear();

        string getDayName(string);
        string getMonthName();
        string toString(string);//toString(formato)
        int dateDiff(Date*);
};

#endif
