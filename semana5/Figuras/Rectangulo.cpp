#include "Rectangulo.h"

Rectangulo::Rectangulo(double ladoA, double ladoB){
    sideA = ladoA;
    sideB = ladoB;
}

double Rectangulo::area(){
    return sideA*sideB;
}

double Rectangulo::perimetro(){
    return sideA*2+sideB*2;
}
