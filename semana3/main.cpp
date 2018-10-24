//funciones de creación y liberación de memoria de
//arreglos unidimensionales y matrices
//
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define SIZE 20//Se puede usar esto si el tamaño no es definido por el usuario

//no se recomienda el uso de variables globales

//Crear un arreglo de char de tamaño especificado
char* createCharArray(int);
//libera la memoria de un arreglo dinámico de chars
void freeCharArray(char*);
//incicializar el arreglo con chars
void initCharArray(char*,int);
//imprimir arreglo de chars
void printCharArray(char*,int);

int main(){

   char* array= NULL;
   cout << "Apuntador antes de instanciar: " << &array << endl;
   array = createCharArray(SIZE);
   cout << "Apuntador inicializado: " << &array << endl;

   array = createCharArray(SIZE);
   initCharArray(array,SIZE);
   printCharArray(array,SIZE);
   freeCharArray(array);
   cout << "Apuntador una vez fue liberado: " << &array << endl;
   
   array = NULL;
   cout << "Tras asignar null: " << &array << endl;

   return 0;
}

//imprimir el arreglo
void printCharArray(char* arreglo, int size){
   if(arreglo!=NULL){   
      cout << "El arreglo es: " << endl;
      for(int i = 0; i < size; i++){
         cout << " " << arreglo[i];
      }
      cout << endl;
   }
}

//inicializar el arreglo
void initCharArray(char* arreglo, int size){
   if(arreglo!=NULL)
   for(int i = 0; i < size; i++)
      arreglo[i] = '.';
   
}

//Crear arreglo dinámico
char* createCharArray(int size){
   return new char[size];
}

//liberar el arreglo dinámico
void freeCharArray(char* arreglo){
   //el delete debe de ir con el corchete [] ya qu estamos liberando un arreglo
   if(arreglo!=NULL)
      delete[] arreglo;
}
