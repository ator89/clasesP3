#include "Char.h"

//#include <string>
//using std::string;

#include <typeinfo>

Char::Char(char c){
  this->c = c;
}

char Char::getChar(){
  return c;
}

void Char::setChar(char c){
  this->c = c;
}

string Char::toString(){
  string retval;
  retval.push_back(c);
  return retval;
}

bool Char::equals(Object* other){
  if(other == NULL)
    return false;
  else if(typeid(*other)==typeid(Char)){
    Char* temp = dynamic_cast<Char*>(other);
    return temp->getChar() == c;
  }else{
    return false;
  }
}
