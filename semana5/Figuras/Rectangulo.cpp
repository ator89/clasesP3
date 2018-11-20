#include "Rectangulo.h"

#include <iostream>
using std::cout;
using std::endl;

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

Rectangulo::~Rectangulo(){
    cout << "Destructor Rectangulo" << endl;
}
