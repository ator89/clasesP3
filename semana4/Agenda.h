#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
using std::vector;

class Agenda{
    private:
        //opcion
        vector<Appointment*> appointments;

        //Appointment** appointments;
        int size;
        Date* inicio;
        Date* fin;
    public:
        Agenda();
        Agenda(Date*, Date*);

        //agrega una cita, verifica disponibilidad
        bool addAppointment(Appointment*);
        //imprime la agenda
        void showAgendaAll();
        bool removeAppointment(int);
        //imprime una fecha de la agenda
        void showAgendaDate();
        ~Agenda();
};
