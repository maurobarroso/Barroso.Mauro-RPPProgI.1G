#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcularIVA(int precio);
int reemplazarCaracter(char cadena[], char caracterAReemplazar, char nuevoCaracter);



int main()
{
    // Calcular IVA
    int precio = 1000;
    int ivaCalculado = calcularIVA(precio);
    printf("El IVA del producto es : %d \n", ivaCalculado);

    // Reemplazar caracter
    char palabra [] = "Pepe";
    int vecesReemplazado = reemplazarCaracter(palabra, 'e', 'a');
    printf("Cantidad de veces reemplazado: %d \n", vecesReemplazado);

    return 0;



}


int calcularIVA(int precio) {
    int precioFinal = 0;
    precioFinal = precio * 0.21;
    return precioFinal;
}

int reemplazarCaracter(char cadena[], char caracterAReemplazar, char nuevoCaracter) {

    int cantidadDeVecesReemplazado = 0;

    for(int i = 0; i < strlen(cadena); i++) {
        if(cadena[i]==caracterAReemplazar) {
            cadena[i] = nuevoCaracter;
            cantidadDeVecesReemplazado++;
        }
    }

    return cantidadDeVecesReemplazado;
}
