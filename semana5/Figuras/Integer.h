#ifdef INTEGER_H
#define INTEGER_H

class Integer{
    private:
        int entero;

    public:
        Integer(int);
        Integer();

        int getValue();
        void setValue(int);

        int operator+(int rvalue){
            return entero + rvalue;
        } 

        double operator+(double rvalue){
            return entero + rvalue;
        }

        bool operator==(Integer& rvalue){
            return this-> entero == rvalue.getValue();
        }

        operator int(){ return entero;}

};

#endif
