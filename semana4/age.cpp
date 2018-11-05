#include "Date.h"
#include "Time.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;


int main(){

    int size = 10;
    //arreglo de apuntadores a objeto fecha
    //dos asteriscos es un arreglo de apuntador
    Date** fechasArray = new Date*[size];
    //inicializar las casillas
    for ( int i = 0; i < size; i++){
        fechasArray[i] = NULL;
    }
    
    fechasArray[0] = new Date();
    fechasArray[1] = new Date();

    //liberar fechas
    for( int i = 0; i < size; i++){
        if(fechasArray[i]!=NULL){//Validar porque no hay fechas controladas
            delete fechasArray[i];
            fechasArray[i]=NULL;
        }
    }

    delete[] fechasArray; //corchetes porque es un array no sólo una casilla
    fechasArray=NULL;    

    //vector de apuntadores a objeto fecha
    vector<Date*> fechas;    

    //agregar un elemento al final del vector
    fechas.push_back(new Date());
    fechas.push_back(new Date());
    //liberar objetos dentro del vector
    for( int i = 0; i<fechas.size(); i++ ){
        delete fechas[i];
        fechas[i]=NULL;
    }    

    //buena prática: limpiar el vector
    fechas.clear();
 
/*
    Date date;
    Time time;
    time.setMin(4);
    time.setHour(5);
    date.setDay(3);
    cout << date.getDay() << endl;
    cout << "Hora: " << time.getHour() << " " << "Minutos: " << time.getMin() << endl; */
    return 0;

}

