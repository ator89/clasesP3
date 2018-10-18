//funcion swap
//funcion de ordenamiento de elementos en un arreglo de enteros

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//función que intercambia los valores de los parámetros:
//el primer parámetro toma el valor del segundo y viceversa
void swap(int,int);

int main(){
   int A=10;
   int B=20;
   swap(A,B);
   cout << "Valor de A: " << A << "Valor de B: " << B << endl;

   return 0;
}

void swap(int a, int b){
   
   
   
   a = a+(b-a);
   b = a-(b-a);

   cout << a << endl;
   cout << b << endl;
}

