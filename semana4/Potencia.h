#ifndef POTENCIA_H
#define POTENCIA_H

class Potencia{
   private:
        int a, b;
        void recursiva(int,int);

   public:
        //Constructor y destructor
        Potencia();
        ~Potencia();
        Potencia(int,int);

        //Accesores y mutadores
        void setA(int);
        int getA();

        void setB(int);
        int getB();
    
        int pow(int, int);


};

#endif
