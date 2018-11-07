//Elemento mayoritario en un arreglo es el elemento que más se repite en el arreglo
//Cree una función que encuentre el elemento mayoritario en un arreglo.
//Para probar la función, el usuario indicará el tamaño del arreglo y este debe ser llenado con valores aleatorios entre 1 y 100.

//El programa imprimirá el arreglo e indicará cuál es el elemento mayoritario
//Usar memoria dinámica

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

int* crearArreglo(int);
void initArreglo(int*, int);
void printArreglo(int*, int);
void freeupArreglo(int*);
void buscarValor(int*, int);

int main(){
   int size = 100;
   int* arreglo = NULL;
   
   arreglo = crearArreglo(size);
   //Inicializar arreglo
   initArreglo(arreglo, size);
   
   //Imprimir arreglo
   printArreglo(arreglo, size);
   
   buscarValor(arreglo, size);

   //liberar memoria 
   freeupArreglo(arreglo); 

   return 0;
}

void buscarValor(int* arreglo, int size){
   int valor, aux;
   int cont = 0;
   
   for ( int i = 0; i < size; i++){
      aux = arreglo[i];
      cout << aux << endl;
      
      if (aux == arreglo[i+1]){
         valor = aux;
      }
      
      if( aux == arreglo[i]){
         aux = valor;
         cont++;
      }
      
      if(arreglo[i] == valor){
         cont++;
         cout << arreglo[i] << endl;
         cout << valor << endl;
      }
      cout << endl;
   }
}

int* crearArreglo(int size){
   int* retval = NULL;
   retval = new int[size];
   return retval;
}

void printArreglo(int* arreglo, int size){
   if( arreglo !=NULL){
      for( int i = 0; i < size; i++){
          cout << arreglo[i] << ' ';
      }
      cout << endl;
   }
}

void initArreglo(int* arreglo, int size){
   if( arreglo != NULL){
      for( int i = 0; i < size; i++){
         arreglo[i] = rand()%101;
      }
   }
}

void freeupArreglo(int* arreglo){
   if( arreglo != NULL){
      delete[] arreglo;
      arreglo = NULL;
   }
}
