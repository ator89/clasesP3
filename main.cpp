//leer un número e imprimir la secuencia hasta ese num.

#include <iostream> //directiva de preprocesador con la librería iostream
using std::cout;
using std::endl;
using std::cin;

int main(){

   int num;
   cout << "Hola Mundo, desde VIM y Ubuntu Linux"<< endl;

   cout << "Ingrese un número: "; cin >> num;

   if(num <0){
      cout << "Ingrese enteros positivos";
   }else{
      for(int i = 1; i<=num; i++){
         cout << i << endl;
      }
   }
   return 0;
}
