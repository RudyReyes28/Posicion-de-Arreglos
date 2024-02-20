#include <iostream>
using namespace std;

int algoritmoPosicionArreglos(int indices[], int dimensiones[], int longitud){


    int posicion=0;

    for(int i = longitud-1; i>=0; i--){
        int indice = indices[i];

        if (indices[i] < 0 || indices[i] >= dimensiones[i]) {
            // Verificar que los índices estén en el rango adecuado
           cout << "Error: indices fuera de rango." << endl;
            return -1; // Valor de error
        }

        int dimension=1;
        for(int j = longitud-1; j>i; j-- ){
            dimension *= dimensiones[j];
        }

        posicion += indice*dimension;
    }


    return posicion;
}

int main() {
    int indices [] = {3,3,2,2,4};
    int dimensiones [] = {4,4,3,3,5};
    int longitud = sizeof(dimensiones) / sizeof(dimensiones[0]);
    int posicion = algoritmoPosicionArreglos(indices,dimensiones, longitud);

    cout<<"La posicion del arreglo es: "<< posicion<<endl;
}
