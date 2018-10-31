#ifndef LABERINTO_H //directiva de preprocesador if indefinido
#define LABERINTO_H 

class Laberinto{
    private:
        char** charMatrix;
        int size;
    public:
        //Constructor debe tener el mismo nombre de la clase
        Laberinto();

        //métodos
        //libera la memoria
        void liberarMatriz();//no hay parametros porque ya está encapsulad
        //crea la matriz en memoria
        void provisionarMatriz(int);
        //leer laberinto del archivo
        void cargarLaberinto(char*);
        
        //imprimir matriz
        void printMatrix();
        //procesa recursivamente las casillas
        bool solve(int,int);  //se necesita ver la casilla procesada
        
        //Destructor
        ~Laberinto();
        
        

};

#endif
