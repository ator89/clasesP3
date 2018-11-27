#include "Stack.h"
#include "ArrayStack.h"
#include "Object.h"
#include "Char.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  Stack* stack = new ArrayStack();

  cout << "Ingrese la cadena a invertir; ";
  string cadena;
  getline(cin, cadena);

  cout << endl;
  cout << "La cadena invertida es: " << endl;

  for(int i = 0; i < cadena.size(); i++){
    stack->push(new Char(cadena[i]));
  }

  Object* temp = stack -> pop();
  while(temp!=NULL){
    cout << temp->toString();
    delete temp;
    temp= stack->pop();
  }
  cout << endl;


  delete stack;
}
