#ifndef CHAR_H
#define CHAR_H

#include "Object.h"

class Char: public Object{
private:
  char c;
public:
  Char(char);
  char getChar();
  void setChar(char);
  virtual bool equals(Object*);
  virtual string toString();

};

#endif
