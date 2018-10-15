#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

   int numero;
   cout << "Ingrese un entero: "<< endl;
   cin >> numero;

   if(numero < 0){
      cout << "Ingrese solo positivos."<<endl;
   }else{
      for(int i=1; i<=numero; i++){
         cout << i << endl;
      }
   }
   return 0;
}
