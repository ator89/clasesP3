#include "Agenda.h"

#include <iostream>
using std::endl;
using std::cout;

Agenda::Agenda(){
    this->appointments;
}

Agenda::~Agenda(){

}

Agenda::Agenda(Date inicio, Date fin){
    
}

bool Agenda::addAppointment(Appointment* appointment){
    if(appointment != 0){
    this -> appointments.push_back(appointment);
    return true;}
    else{
        cout << "Seleccione otra cita" << endl;
    }
}
