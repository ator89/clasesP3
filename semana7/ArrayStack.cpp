#include "ArrayStack.h"

ArrayStack::ArrayStack(){
  pos = 0;
  size = 100;
  array = new Object*[size];
  //Inicializar en null
  for(int i = 0; i < size; i++){
    array[i] = 0;
  }
}

bool ArrayStack::push(Object* obj){


  return false;
}

Object* ArrayStack::pop(){
    return 0;
}

Object* ArrayStack::top(){
  return 0;
}

void ArrayStack::print(){

}

ArrayStack::~ArrayStack(){
  if(pos>0){
    for(int i = 0; i < pos; i++){
      delete array[i];
      array[i]=0;
    }
  }
  delete[] array;
}
