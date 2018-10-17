#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main(){

   int numero; 
   char opcion;

   do{
      cout << "Ingrese un numero: "<< endl;
      cin >> numero;
   
      if(numero < 0){
         cout << "Ingrese solo positivos."<<endl;
      }else{
         for(int i=1; i<=numero; i++){
            cout << " " << i;
         }
	 cout <<endl;
       }

      cout << "Desea continuar? (s/n)"<<endl;
      cin >> opcion;

   }while (opcion != 'n');
   cout << "Programa terminado con éxito\n";

   return 0;
}
