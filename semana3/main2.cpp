//funciones para provisionar, inicializar y liberar arreglos bidimensionales
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//provisiona una matriz de nxn enteros
int** createIntMatrix(int);

//inicializar matriz
void intIntMatrix(int**,int);

//imprime una matriz de nxn enteros
void printIntMatrix(int**, int);

//liberar una matriz de nxn enteros
void freeIntMatrix(int**,int);

int main(){
    
    
   
    return 0;
}

//Provisionar la matriz
int** createIntMatrix(int size){
    int** reVal = NULL;
    //provisionar las filas
    retVal = new int*[size];
    //provisionar las columnas de cada fila
    for( int i = 0; i < size; i++ ){
        retVal[i] = new int[size];
    }
    return retVal;
}

//inicializar la matriz
void initIntMatrix(int** matrix, int size){
    for( int i = 0; i < size; i++ ){
        for(int j = 0; j < size; j++ ){
            matriz[i][j] = 0;
        }
    }
}

