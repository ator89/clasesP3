#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Object.h"
#include "Stack.h"

class ArrayStack: public Stack{
private:
  int pos;
  Object** array; //arreglo de apuntadores a Object
  int size;
public:
  ArrayStack();
  ~ArrayStack();

  virtual bool push(Object*);
  virtual Object* pop();
  virtual Object* top();
  virtual void print();


};

#endif
