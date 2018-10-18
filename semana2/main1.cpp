//funcion swap
//funcion de ordenamiento de elementos en un arreglo de enteros
//generar número aleatoriamente

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

//función que intercambia los valores de los parámetros:
//el primer parámetro toma el valor del segundo y viceversa
void swap(int&,int&);

//función que llena un arreglo de enteros con elementos aleatorios
void fillArray(int[],int);

//función para imprimir arreglo
void printIntArray(int[],int);

//Bubble Sort
void ordenarArreglo(int[], int);

//imprimir arreglo ordenado
void printBArray(int[],int);

int main(){
   int A=10;
   int B=20;
   swap(A,B);
   cout << "Valor de A: " << A << "Valor de B: " << B << endl;

   int size=100;
   int arreglo[size];
   //preparar seed para random
   srand(time(NULL));
   
   //llenar el arreglo
   fillArray(arreglo,size);
   
   //imprimir el arreglo 
   printIntArray(arreglo,size);

   //ordenar el arreglo
   ordenarArreglo(arreglo,size);

   //imprimir el arreglo ordenado
   cout << "Valor del arreglo ordenanos: " << endl;
   printBArray(arreglo,size);

   return 0;
}

//BubbleSort
void ordenarArreglo(int arreglo[], int size){
   for(int i = 0; i <size; i++){
      for( int j = 0; j < size-1; j++){
         if(arreglo[j]>arreglo[j+1]){
	    swap(arreglo[j],arreglo[j+1]);
	 }
      }
   }
}

//print arreglo
void printBArray(int array[], int size){
   for(int i=0; i < size; i++){
      cout << " " << array[i];
   }
   cout << endl;
}

//imprime un arreglo de enteros
void printIntArray(int array[], int size){
   for(int i=0; i<size; i++){
      cout << " " << array[i];
   }
   cout << endl;
}

//lenar el arrego con números aleatorios
void fillArray(int array[], int size){
   for( int i = 0; i < size; i++ ){
      //generar elemento aleatorio entre 0 y 1000
      array[i]=rand()%1001;
   }
}

//intercambiar valores usuando referencias y variables temporales
void swap(int& a, int& b){
   
   int x=a;
   int y=b;
   a=y;
   b=x;
   
}


