#include "Laberinto.h"

#include<iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
    if(argc<2){
        cout << "Falta el nombre del archivo" << endl;
    }else{
        /*
        Laberinto laberinto;
        //cargar el laberinto desde el archivo
        laberinto.cargarLaberinto(argv[1]);
        //imprimir el lab
        laberinto.printMatrix();
        //resolver laberinto
        laberinto.solve(0,1);
        //print solution
        laberinto.printMatrix();
        */
    }
    
    Laberinto* laberinto = new Laberinto();
    
    //cargar archivo
    laberinto->cargarLaberinto(argv[1]);

    //imprimir
    laberinto->printMatrix();

    //resolver
    laberinto->solve(1,0);
    
    //imprimir resuelto
    laberinto->printMatrix();

    delete laberinto;   

    return 0;
}
