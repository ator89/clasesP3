#include "Figura.h"

#include <iostream>

/*
double Figura::area(){
    return -1;
}

double Figura::perimetro(){
    return -1;
}*/

Figura::~Figura(){
    std::cout << "Destructor Figura" << std::endl;
}

double Figura::operator+(Figura* LD){
    return this->perimetro() + LD ->perimetro(); 
}

bool Figura::operator==(Figura* LD){
     
    if ( this->perimetro() == LD->perimetro() ){
        return true;
    }
else{return false;
    }
}
