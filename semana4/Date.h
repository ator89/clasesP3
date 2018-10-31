#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int day;
        int month;
        int year;

    public:
        //Constructor y destructor
        Date();
        ~Date();

        std::string toString();
        //getters and setters
        void setDay(int);
        int getDay();

        void setMonth(int);
        int getMonth();

        void setYear(int);
        int getYear();

        std::string getDayName();
        std::sintrg getMonthName();
    
};

#endif
