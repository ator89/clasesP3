#include "Stack.h"
#include "ArrayStack.h"
#include "Object.h"
#include "Char.h"
#include "LinkedStack.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;

int main(){
  /*
  Stack* stack = new LinkedStack();

  cout << "Ingrese la cadena a invertir; ";
  string cadena;
  getline(cin, cadena);

  cout << endl;
  cout << "La cadena invertida es: " << endl;

  for(int i = 0; i < cadena.size(); i++){
    stack->push(new Char(cadena[i]));
  }

  Object* temp = stack -> pop();
  while(temp!=NULL){
    cout << temp->toString();
    delete temp;
    temp= stack->pop();
  }
  cout << endl;


  delete stack;
  */
  ofstream outPutFile;
  outPutFile.open("test.txt",std::ios::app);

  ArrayStack* arrayStack = new ArrayStack();
  arrayStack->push(new Char('A'));
  arrayStack->push(new Char('B'));
  arrayStack->push(new Char('C'));

  cout << arrayStack;
  outPutFile << arrayStack;
  delete arrayStack;


  outPutFile.close();

  //leer del archivo
  string fileName;
  cout << "Ingrese el nombre del archivo: ";
  cin >> fileName;

  ifstream inputFile;
  inputFile.open(fileName.c_str());
  if( !inputFile.is_open()){
    cout << "El archivo no existe." << endl;
  }else{
    string buffer;
    cout << "El contenido del archivo es: " << endl;
    while(!inputFile.eof()){
      getline(inputFile,buffer);
      cout << buffer << endl;
    }
    inputFile.close();
  }

}
