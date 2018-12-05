#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

//#include "Object.h"
#include "Stack.h"
#include "Char.h"
#include <iostream>
using std::ostream;
using std::istream;
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
    for(int i = data->pos-1; i >=0; i--){
      out /*<< "<" */<< data->array[i]->toString() /*<< "> "*/;
      if(i>0)
        out << ",";
    }
    out << endl;
    return out;

  }

  friend istream& operator >>(istream& in, ArrayStack* data){
    string buffer;
    getline(in, buffer);
    for(int i = buffer.size(); i >= 0; i--){
      if(buffer[i] != ','){
        data->push(new Char(buffer[i]));
      }//end if
    }//end for
    return in;
  }//end function

};

#endif
