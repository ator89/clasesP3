//funciones para provisionar, inicializar y liberar arreglos bidimensionales
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//provisiona una matriz de nxn enteros
int** createIntMatrix(int);

//inicializar matriz
void initIntMatrix(int**,int);

//imprime una matriz de nxn enteros
void printIntMatrix(int**, int);

//liberar una matriz de nxn enteros
void freeIntMatrix(int**&,int);

int main(){
    int tam = 10;
    int** matriz = createIntMatrix(tam);    
    initIntMatrix(matriz, tam);
    printIntMatrix(matriz,tam);
    freeIntMatrix(matriz,tam);
    
    return 0;
}

//liberar matriz nxn
void freeIntMatrix(int**& matrix, int size){
    //primero liberar las columnas de cada fila
    for(int i = 0; i < size; i++ ){
        delete[] matrix[i];
        matrix[i]=NULL;
    }
    //liberar fijas
    delete[] matrix;
    matrix = NULL;
    
}

//Provisionar la matriz
int** createIntMatrix(int size){
    int** retVal = NULL;
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
            matrix[i][j] = 0;
        }
    }
}

//imprimir la matriz
void printIntMatrix(int** matrix, int size){
    cout << "Matriz de enteros: " << endl;
    for(int i = 0; i < size; i++ ){
        for(int j = 0; j < size; j++ ){
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
