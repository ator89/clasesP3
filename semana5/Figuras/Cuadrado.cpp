#include "Cuadrado.h"

#include <iostream>
using std::cout;
using std::endl;

double Cuadrado::getLado(){
    return this->sideA;
}

Cuadrado::Cuadrado(double side):Rectangulo(side,side){
    //
}

Cuadrado::~Cuadrado(){
    cout << "Destructor Cuadrado" << endl;
}
