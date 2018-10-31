#ifndef TIME_H
#define TIME_H

class Time{
    private:
        int hour;
        int min;

    public:
        //Constructor y destructor
        Time();
        ~Time();
        Time(int,int);
        ~Time(int,int);

        //getters and setters
        void setHour(int);
        int getHour();

        void setMin(int);
        int getMin();
 
        std::string getDayName();
       
        std::string toString();
        //timeDiff
};

#endif

