#include "Laberinto.h" //comillas para buscar en directorio raiz

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;//input file stream

Laberinto::Laberinto(){//implementar método
    this->charMatrix=NULL;
    this->size=0;
}

void Laberinto::liberarMatriz(){
    if(charMatrix!=NULL){
        for( int i = 0; i < size; i++ ){
            //delete[] charMatrix[i];
            delete charMatrix[i];
            charMatrix[i]=NULL;
        }
        delete[] charMatrix;
        charMatrix=NULL;
    }
}

void Laberinto::provisionarMatriz(int pSize){
    if(charMatrix!=NULL){
        liberarMatriz();
    }
    //int pSize;
    size=pSize;
    
    charMatrix=new char*[size];
    for(int i=0; i < size; i++){
        charMatrix[i]=new char[size];        
    }
}

void Laberinto::printMatrix(){
    if(charMatrix!=NULL){
        for(int i = 0; i < size; i++){
            for(int j=0; j < size; j++){
                cout << " " << charMatrix[i][j];
            }//for j
            cout << endl;
        }//for i
    }//if
    else{
        cout << "Matriz nula, nada para imprimir" << endl;
    }
}

Laberinto::~Laberinto(){
    liberarMatriz();
    cout << "La memoria fue liberada" << endl;
}

void Laberinto::cargarLaberinto(char* fName){
    ifstream file(fName);
    if(file.is_open()){
        //si está abiero, leer tamaño
        int pSize;
        file >> pSize;
        
       // size=pSize;
            
        
        //provisionar la matriz nxn
        provisionarMatriz(pSize);
        
        //leer matriz
        for(int i= 0; i<size; i++){
            for(int j=0; j<size;j++){
                file >> charMatrix[i][j];
            }
        }
        file.close();
        
    }//if


}

bool Laberinto::solve(int x,int y){
    printMatrix();
    cout << endl;
    cin.ignore();

    char** laberinto=charMatrix;
    
    bool salio = false;
    if(laberinto[x][y] == 'e' ){
        cout << "Salió" << endl;
        return true;
    }else{
        //bool salio = false;
        //cout << "hola mundo";
        laberinto[x][y] = 'x';
        //arriba
        if(x>0 && !salio){
            if( laberinto[x-1][y] == '.' || laberinto[x-1][y] == 'e')
                salio = solve( x-1,y);
        }
        //derecha
        if(y>0 && !salio){
            if( laberinto[x][y+1] == '.' || laberinto[x][y+1] == 'e')
                salio = solve(x, y+1);
        }
        //abajo
        if(x >0  && !salio){
            if( laberinto[x+1][y] == '.' || laberinto[x+1][y] == 'e')
                salio = solve( x+1, y);
        }
        //izquierda
        if( y > 0 && !salio){
            if( laberinto[x][y-1] == '.' || laberinto[x][y-1] == 'e')
                salio = solve( x, y -1);
        }
       // if(salio)
         //   laberinto[x][y]='x'; 

    }
    return salio;
}
