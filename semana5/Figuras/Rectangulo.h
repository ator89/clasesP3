#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura{
    protected:
        double sideA, sideB;
    public:
        Rectangulo(double,double);
        ~Rectangulo();
        double area();
        double perimetro();
};


#endif
