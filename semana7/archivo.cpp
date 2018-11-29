#include <iostream>
using std::endl;
using std::cout;

#include <fstream>
using std::ofstream;

int main(){

  ofstream arc;
  arc.open("test.txt");
  arc << "jjj texto.";
  arc.close();

  return 0;
}
