#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define T 5

void cargarVector(int [], int);
void mostrarElementosDelVector(int[],int);
int buscarMaximo(int[], int);

int main()
{
    int numeros[T];
    int maximo;
    int posicion;


    cargarVector(numeros, T);

    mostrarElementosDelVector(numeros, T);

    maximo = buscarMaximo(numeros,T);
    printf("El valor maximo del array es: %d\n", maximo);

    posicion = buscarValor(numeros, T , 3);
    if(posicion == -1){
        printf("No se encontro el numero buscado");
    }else{
         printf("La posicion del valor encontrado es: %d", posicion);
    }

    return 0;
}
