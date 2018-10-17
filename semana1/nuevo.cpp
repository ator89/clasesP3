#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//funciones en C++
int menu(){
   int retval = 0;
salto:
   while(retval==0){
      cout << "\tMENU" << endl
	   << "1 - Leer tamaño del arreglo"<<endl
	   << "2 - Imprimir el arreglo" << endl
	   << "3 Salir" <<endl
	   << "Ingrese una opción: ";
      cin >> retval;

      if(retval <1 || retval >3){
         retval=0;
	 cout << "Opcion incorrecta, intente de nuevo"<<endl;
      }
   }
   return retval;
}


int main(){
   int opcion=0;
   int size=0;
  
   do{
      switch(opcion=menu()){
         case 1:
		cout << "Ingrese el tamaño del arreglo: ";
		cin >> size;
	    break;
	 case 2:{//se usan cuando se declara una variable
		 if(size <=0){
		    cout << "El tamaño no es correcto."  << endl;
		 }else{
	              //declarar e instanciar un arreglo
		      char arreglo[size];
		      //inicializar el arreglo
		      for(int i = 0; i< size; i++){
		         arreglo[i] = 64 + i;
		      }
		      //mostrar contenido del arreglo
		      cout << "Los datos del arreglo son: "<<endl;
		      for(int i = 0; i < size; i++){
		         cout << " " << arreglo[i];
		      }
		      cout << endl;
		 }
	 }break;
      }//end switch
   
   }while(opcion!=3); 
   //goto salto;
   return 0;
}
