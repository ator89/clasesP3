#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node{
private:
  Object* data;
  Node* next;
public:
  Node(Object*);
  Node();
  ~Node();
  //data
  Object* getData();
  void setData(Object*);
  //Node
  void setNext(Node*);
  Node* getNext();


};

#endif
