#ifndef STACK_H
#define STACK_H

#include "Object.h"

class Stack{

public:

  ~Stack();

  virtual bool push(Object*) = 0;
  virtual Object* pop() = 0;
  virtual Object* top() = 0;
  virtual void print() = 0;

};

#endif
