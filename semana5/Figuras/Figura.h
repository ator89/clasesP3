#ifndef FIGURA_H
#define FIGURA_H

//no usar referencias & cuando se usa método virtual puro

class Figura{
    public:
        virtual double area()=0; // Método virtual puro si se iguala a 0
        virtual double perimetro()=0;
        double operator+(Figura*); //implentando sobrecarga de operadores
        bool operator==(Figura*);
        virtual ~Figura();    
};

#endif
