#include <iostream>
using std::endl;
using std::cout;

#include <fstream>
using std::ofstream;

int main(){

  ofstream arc;
  arc.open("test.txt",std::ios::app);
  arc << "Otra cosa, otra cosa " << endl ;
  arc.close();



  return 0;
}
