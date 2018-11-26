#ifndef OBJECT_H
#define OBJECT_H

#include <string>
using std::string;

class Object{

public:
  //Object();
  virtual ~Object();

  virtual string toString() = 0;
  virtual bool equals(Object*) = 0;

};

#endif
