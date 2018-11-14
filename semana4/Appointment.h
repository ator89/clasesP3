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
        Appointment();
        Appointment(Date*,Hour*,Hour*);
        Hour* getHoraInicio();
        Hour* getHoraFin();
        Date* getFecha();
        void setHoraInicio(Hour*);
        void setHoraFin(Hour*);
        void setFecha(Date*);
        string getDescripcion();
        void setDescripcion(string);
        ~Appointment();
};

#endif
