#include "Stack.h"
#include "ArrayStack.h"
#include "Object.h"

int main(){
  Stack* stack = new ArrayStack();
  delete stack;
}
