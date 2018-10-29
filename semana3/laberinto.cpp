#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <fstream>
using std::ifstream;


//Provisionar la matriz de chars para el laberinto
char** provisionarMatriz(int);

//liberar memoria de la matriz
void liberarMatriz(char**&,int);

//imprimir la matriz
void printMatrix(char**,int);

//salir del laberinto: lab, size, x, y 
bool solve(char**,int,int,int);

int main( int argc, char* argv[]){
    //abrir el archivo
    ifstream file(argv[1]);
    //ifstream file("laberinto.txt");
 
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
   // bool resp = false;
     solve(labMatrix, size, 0, 1);
    // TODO:salir del laberinto
    //file.close();
    liberarMatriz(labMatrix,size);
  
    }else{
        cout << "El archivo no existe o no fue especificado." << endl;
    }
    return 0;
}//end main


bool solve(char** laberinto, int size, int x, int y){
    printMatrix(laberinto,size);
    cout << endl;
    cin.ignore();
    
    bool salio = false;
    if(laberinto[x][y] == 'e' ){
        cout << "Salió" << endl;
        return true;
    }else{
        //bool salio = false;
        cout << "hola mundo";
       laberinto[x][y] = 'x';
        //arriba
        if(x>0 && !salio){
            if( laberinto[x-1][y] == '.' || laberinto[x-1][y] == 'e')
                salio = solve(laberinto, size, x-1,y);
        }
        //derecha
        if(y>0 && !salio){
            if( laberinto[x][y+1] == '.' || laberinto[x][y+1] == 'e')
                salio = solve(laberinto, size, x, y+1);
        }
        //abajo
        if(x < 9 && !salio){
            if( laberinto[x+1][y] == '.' || laberinto[x+1][y] == 'e')
                salio = solve(laberinto, size, x+1, y);
        }
        //izquierda
        if( y > 0 && !salio){
            if( laberinto[x][y-1] == '.' || laberinto[x][y-1] == 'e')
                salio = solve(laberinto, size, x, y -1);
        }
       // if(salio)
         //   laberinto[x][y]='x'; 
    
    }
    return salio;
}


//crear la matriz 
char** provisionarMatriz(int size){
    char** retVal = NULL;
    // filas
    retVal = new char*[size];

    //columnas
    for (int i = 0; i < size; i++ ){
        retVal[i] = new char[size];
    }
    return retVal;
}

//imprimir la matriz (laberinto)
void printMatrix(char** matrix, int size){
    cout << "Laberinto: " << endl;
    for (int i = 0; i < size; i++ ){
        for( int j = 0; j < size ; j++ ){
            cout << ' ' << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//liberar la matriz
void liberarMatriz(char**& matrix, int size){
    //comenzar por las columnas
    for( int i = 0; i < size; i++ ){
        delete[] matrix[i];
        matrix[i] = NULL;
    }
    //filas
    delete[] matrix;
    matrix = NULL;    
}
