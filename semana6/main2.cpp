#include "ArrayStack.h"
#include "Char.h"

int main(){

  ArrayStack stack1;
  stack1.push(new Char('a'));

  cout << "contenido pila 1" << &stack1;

  ArrayStack stack2=stack1;


  return 0;
}
