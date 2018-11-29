#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

//#include "Object.h"
#include "Stack.h"
#include <iostream>
using std::ostream;
using std::endl;

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

  //sobrecarga operador de flujo de salida
  friend ostream& operator << (ostream& out, ArrayStack* data){
    for(int i = data->pos-1; i >=0; i--)
      out << "<" << data->array[i]->toString() << "> ";
    out << endl;
    return out;
  }

};

#endif
