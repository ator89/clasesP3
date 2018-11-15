#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Date.h"
#include "Hour.h"
#include <string>

class Appointment{
    private:
        Hour* inicio;
        Hour* fin;
        Date* fecha;
        string descripcion;
    public:
        //Constructores
        Appointment();
        Appointment(Date*,Hour*,Hour*);
        
        //Getters
        Hour* getHoraInicio();
        Hour* getHoraFin();
        Date* getFecha();
        string getDescripcion();

        //Setters
        void setHoraInicio(Hour*);
        void setHoraFin(Hour*);
        void setFecha(Date*);
        void setDescripcion(string);
        
        //Destructor
        ~Appointment();
};

#endif
