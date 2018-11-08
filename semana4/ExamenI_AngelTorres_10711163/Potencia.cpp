#include "Potencia.h"

#include <iostream>
using std::cout;
using std::cin;

//Constructor por defecto
Potencia::Potencia(){
    this->a = 0;
    this->b = 0;
}

//Constructor sobrecargado
Potencia::Potencia(int a, int b){
    this->a = a;
    this->b = b;
}

//Liberar memoria
Potencia::~Potencia(){  
}


void Potencia::setA(int a){
    this->a = a;
}

int Potencia::getA(){
    return a;
}

void Potencia::setB(int b){
    this->b = b;
}

int Potencia::getB(){
    return b;
}

int Potencia::pow(int a, int b){
    
    return 0;
}

