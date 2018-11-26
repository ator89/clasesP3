#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"

#include <iostream>
using std::endl;
using std::cout;

#include <typeinfo>

int main(){
    //Figura figura;
    //cout << "Área: " << figura.area() << endl;
    //Rectangulo rectangulo(10,10);
    //cout << "Perimetro del rectángulo: " << rectangulo.perimetro() << endl;
   
    Figura* figura2 = new Rectangulo(10,15);
    cout << "El área del rectángulo es: " << figura2->area() << endl;
    //delete figura2;
    
    Figura* cuadrado = new Cuadrado(50);
    Cuadrado* cuadrado1 = new Cuadrado(50); 
    cout << "El perimetro del cuadrado es: " 
            << cuadrado->perimetro() << endl;
    
    //invocar un método de la clase Cuadrado
   

    Cuadrado* temporal = dynamic_cast<Cuadrado*>(cuadrado);
    //if (temporal!=NULL)
    cout << "La longitud de lado es" << temporal->getLado() << endl; 
    

    //reinterpret cast
    cout << "****************" << endl;
    int entero=2500;
    char* temp;
    temp = reinterpret_cast<char*>(&entero);
    cout << temp << endl;
    cout << "*****************" << endl;

    //sobrecarga de operadores 
    cout << cuadrado->perimetro()+figura2->perimetro() << endl;
    cout << *cuadrado + figura2 << endl;
     
    cout << cuadrado->operator==(figura2) << endl ;
   
    //Type ID y type info
    cout << "Ptr variable cuadrado" << typeid(cuadrado).name() << endl;
    cout << "Variable Cuadrado: " << typeid(*cuadrado).name() << endl;
    cout << "Tipo de dato: " << typeid(Cuadrado*).name() << endl;

    if(typeid(Cuadrado) == typeid(cuadrado)){
        cout << "La variable es un cuadrado" << endl;
    } else{
        cout << "La variable no es un cuadrado" << endl;
    }

    cout << cuadrado << endl; 
 
    delete figura2;
    delete cuadrado;
     
    return 0;
}
