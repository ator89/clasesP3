#include "LinkedStack.h"

#include <iostream>
using std::cout;
using std::endl;

LinkedStack::LinkedStack(){
  inicio = 0; //asignar null
}

bool LinkedStack::push(Object* obj){
  //1 - Crear el nodo contenedor
  Node* newNode = new Node(obj);
  //2 - enlazar con el siguiente nodo
  newNode->setNext(inicio);
  //3 - enlazar el inicio al nuevo nodo
  inicio = newNode;
  //returnw
  return true;
}

Object* LinkedStack::top(){
  if(inicio == 0) // si el inicio es null
    return 0;
  else{
    return inicio->getData();
  }
}

Object* LinkedStack::pop(){
  if(inicio == 0)
    return 0;
  else{
    //Copiar la dirección del nodo que se va a eliminar
    Node* tmp = inicio;
    //enlazar inicio
    inicio=inicio->getNext();
    //obtener el objeto a retornar
    Object* retVal = tmp->getData();
    //Preparar para liverar el nodo que no se necesita máscanf
    tmp->setData(0);//asignar null
    tmp->setNext(0);//asignar null
    //liberar la memoria del nodo
    delete tmp;
    //retornar
    return retVal;
  }
}

void LinkedStack::print(){
  Node* tmp=inicio;
  cout << "Stack:>> ";
  while(tmp != 0){
    cout << "<" << tmp->getData()->toString() << ">";
    //moverse hacia adelante
    tmp = tmp->getNext();
  }
  cout << endl;
}

LinkedStack::~LinkedStack(){
  delete inicio;
}
