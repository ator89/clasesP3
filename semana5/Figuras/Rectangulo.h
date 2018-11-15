#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura{
    private:
        double sideA, sideB;
    public:
        Rectangulo(double,double);
        double area();
        double perimetro();
};


#endif
