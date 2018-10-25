#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <fstream>
using std::ifstream;


//Provisionar la matriz de chars para el laberinto
char** provisionarMatriz(int);

//liberar memoria de la matriz
void liberarMatriz(char**,int);

//imprimir la matriz
void printMatrix(char**,int);

//salir del laberinto: lab, size, x, y 
//bool salir(char**,int,int,int);

int main(){
 //abrir el archivo
 ifstream file("laberinto.txt");
 
 int size=0;
 char** labMatrix=NULL;
 //si el archivo existe
 if( file.is_open() ){
  //leer el tamaño
   file >> size;
   
   //inicializar matriz n x n
   labMatrix=provisionarMatriz(size);

   //leer la matriz del archivo
   for( int i = 0; i < size; i++)
     for( int j = 0; j < size; j++)
        file >> labMatrix[i][j];

   file.close();

   printMatrix(labMatrix,size);

// TODO:salir del laberinto

   liberarMatriz(labMatrix,size);

   
  
 }
 return 0;
}//end main


