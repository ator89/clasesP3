#include "Appointment.h"
#include <iostream>

#include <string>
using std::string;

Appointment::Appointment(){
    this-> inicio = 0;
    this-> fin = 0;
    this-> fecha = 0;
    this-> descripcion = "";
}

Appointment::Appointment(Date* fecha, Hour* inicio, Hour* fin){
    this-> fecha = fecha;
    this-> inicio = inicio;
    this-> fin = fin;
}

Appointment::~Appointment(){
}

//Getters
Hour* Appointment::getHoraInicio(){
    return this-> inicio;
}

Hour* Appointment::getHoraFin(){
    return this-> fin;
}

Hour* Appointment::getFecha(){
    return this-> fecha;
}

string Appointment::getDescripcion(){
    return this-> descripcion;
}

//Setters
void Appointment::setHoraInicio(Hour* inicio){
    this-> inicio = inicio;
}

void Appointment::setHoraFin(Hour* fin){
    this-> fin = fin;
}

void Appointment::setFecha(Date* fecha){
    this-> fecha = fecha;
}

void Appointment::setDescripcion(string descripcion){
    this-> descripcion = descripcion;
}
