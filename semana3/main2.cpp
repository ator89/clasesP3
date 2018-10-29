//funciones para provisionar, inicializar y liberar arreglos bidimensionales
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

//provisiona una matriz de nxn enteros
int** createIntMatrix(int);

//inicializar matriz
void initIntMatrix(int**,int);

//***A: Inicializar matriz con números aleatorios
void initRanIntMatrix(int**, int);
void printRanIntMatrix(int**&, int);
void freeRanIntMatrix(int**&,int);

//imprime una matriz de nxn enteros
void printIntMatrix(int**, int);

//liberar una matriz de nxn enteros
void freeIntMatrix(int**&,int);

void salir(char**,int,int,int);

int main(){
    int tam = 10;
    int** matriz = createIntMatrix(tam);    
    initIntMatrix(matriz, tam);
    printIntMatrix(matriz,tam);
    freeIntMatrix(matriz,tam);
    
    int** ma = createIntMatrix(tam);
    initRanIntMatrix(ma, tam);
    printRanIntMatrix(ma, tam);

    //Ejercicio
    //A: Crear una función que inicialize la matriz con valores aleatorios
    //entre 1 y 100
    //B: Crear una función que copie los elementos de una matriz a otra, 
    //ambas matrices son del mismo tamaño. Copiar los elementos de una matriz
    //inicializada con la función del ejercicio A en una matriz inicializada
    //con la función initIntMatrix creada en clase.
    
    return 0;
}

void salir(matriz**, int size, int x, int y){
    bool salio = false;
    
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

void freeRanIntMatrix(int**& matrix, int size){
    for(int i=0; i < size; i++){
        delete[] matrix[i];
        matrix[i]=NULL;
    }
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

//***init A:
void initRanIntMatrix(int** matrix, int size){
    for( int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[i][j] = rand()%101;
        }
    }
}
//***print A
void printRanIntMatrix(int**& matrix, int size){
    cout << "Matriz con números aleatorios: " << endl;
    for( int i = 0; i < size; i++ ){
        for( int j = 0; j < size; j++ ){
            cout << ' '<< ' '<< matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
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
