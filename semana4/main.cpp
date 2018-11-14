#include "Potencia.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Función menú principal;
int menu();

//Funciones del arreglo
int* crearArreglo(int);//Crear
void initArreglo(int*, int);//inicializar
void printArreglo(int*, int);//Imprimir
void freeupArreglo(int*);//Liberar memoria

int main(){
    int opcion;
    int* arreglo = NULL;//Declarar el arreglo en nulo.
    
    int tamanio; //Tamanio del arreglo
    int a, b; //Variables ejercicio #1
     
    Potencia potencia;
  
    do{
        switch(opcion = menu()){
            case 1://Ingresar 2 números
                cout << "Ingrese el valor de A: " << endl;
                cin >> a;
                cout << "Ingrese el valor de B: " << endl;
                cin >> b;

                potencia.setA(a);
                potencia.setB(b);

                cout << "A " << a << endl;
                cout << "B " << b << endl;                 

                break;
            case 2://Calcular Potencia
                break;
            case 3://Ejercicio Arreglo
                cout << "Ingrese el tamanio del arreglo: " << endl;
                cin >> tamanio;
                
                arreglo = crearArreglo(tamanio);
                initArreglo(arreglo, tamanio);
                printArreglo(arreglo, tamanio);
                freeupArreglo(arreglo);
                break;
            case 4://Salir
                break;
            default:
                cout << "Opción inválida" << endl;
        }//End switch
    }while(opcion != 4);
    return 0;
}

//Imprimir el arreglo
void printArreglo(int* arreglo, int size){
    cout << "Valores del arreglo:" << endl; 
    for(int i = 0; i < size; i++){
        cout << arreglo[i] << ' ';
    }
    cout << endl;
}

//Inicializar arreglo
void initArreglo(int* arreglo, int size){
    if(arreglo != NULL){
        cout << "Ingrese los valores del arreglo:" << endl;
        for ( int i = 0; i < size; i++){
            cin >> arreglo[i];
        }
    }
}


//Crear arreglo
int* crearArreglo(int size){
    return new int[size];
}

//Liberar memoria
void freeupArreglo(int* arreglo){
    delete[] arreglo;
    arreglo = NULL;
    cout << "****Memoria liberada****" << endl;
}


//Función del menú principal
int menu(){
    int retval = 0;
    while( retval == 0){
        cout << "\tMENU" << endl
            << "1 - Ingresar dos números" << endl
            << "2 - Calcular Potencia" << endl
            << "3 - Ejercicio Arreglo" << endl
            << "4 - Salir" << endl
            << "Seleccione una opción" << endl;
        cin >> retval;

        if (retval < 1 || retval > 4){
            retval = 0;
            cout << "Opción no válida" << endl;
        }//End if
    }//End while
    return retval;
}
