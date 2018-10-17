//declaración e inicialización de arreglos
//prototipos de funciones
//sobrecarga de funciones
//introducción a parámetros por valor y por referencia

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

//prototipo de función
void printArray(char[],int);

void printArray(string[],int);

//introducción a parámetros por valor
void foo(int&);

int main(){
   //declaración e inicialización de arreglos
   //opción 1:igual que en la clase anterior 
   
   //opción 2: declarar e inicializar con valores al mismo tiempo
   char arreglo[] ={'A','b','c','d','e','f'}; 
   string days[] = {"Lunes","Martes","Miercoles","Jueves"};
   printArray(arreglo,6);

   printArray(days,4);

   //opción 3: inicializar en memoria dinámica con un 'new'
   int* intPtr = new int[10];
   
   //parámetros por valor y por referencia
   int size = 10;
   foo(size);
   cout << "El valor de size es: " << size << endl;

   return 0;
}
//imprime arreglo de chars
void printArray(char arreglo[],int size){
   cout << "Arreglo de chars: " << endl;
   for( int i = 0; i < size; i++ ){
      cout << arreglo[i];
   }
   cout << endl;
}

//imprime arreglo de strings
void printArray(string arreglo[], int size){
   cout << "Arreglo de strings: " << endl;
   for (int i = 0; i < size; i++){
      cout << " " << arreglo[i];
   }
   cout << endl;

}

//implementación de la función foo
void foo(int& num){
    cout << "El número es: " << num << endl;
    num = 7;
    cout << "El numero ahora es: "<< num << endl;
}
