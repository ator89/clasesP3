#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "Stack.h"
#include "Node.h"

class LinkedStack: public Stack{
private:
  Node* inicio;
public:
  LinkedStack();

  virtual bool push(Object*);
  virtual Object* pop();
  virtual Object* top();
  virtual void print();

  ~LinkedStack();
};

#endif
