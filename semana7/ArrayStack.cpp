#include "ArrayStack.h"

#include <iostream>
using std::cout;
using std::endl;

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

  if(pos==size){
    return false;
  }else{
    array[pos]=obj;
    pos++;
    return true;
  }

}

Object* ArrayStack::pop(){

  if( pos == 0){
    return 0;
  }
  else{
    pos--;
    Object* retVal = array[pos];
    array[pos]=0;
    return retVal;
  }
}

Object* ArrayStack::top(){
  if(pos == 0){
    return 0;
  }
  else{
    return array[pos-1];
  }
}

void ArrayStack::print(){
  cout << "Stack:>> ";
  for(int i=pos-1; i>=0;i--){
    cout << "<" << array[i]->toString() << "> ";
  }
  cout << endl;
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
