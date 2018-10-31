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
        Date(int,int,int);
        ~Date(int,int,int);
        
        //getters and setters
        void setDay(int);
        int getDay();

        void setMonth(int);
        int getMonth();

        void setYear(int);
        int getYear();

        std::string getDayName(string);
        std::sintrg getMonthName();
        std::string toString();//toString(formato)
        int dateDiff(Date*);
};

#endif
