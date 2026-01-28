/**
 * @file Programa2
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    int palabras=1,letras=0,numeros=0,especiales=0;
    size_t tamanio;

    printf("Ingrese una cadena texto: ");
    fgets(cadena,50,stdin);

    tamanio=strlen(cadena);

    for (size_t i = 0; i < tamanio-1; i++)
    {
        if (cadena[i]==32)
        {
            palabras++;
        }
        else if (cadena[i]>=97&&cadena[i]<=122)
        {
            letras++;
        }
        else if (cadena[i]>=65&&cadena[i]<=90)
        {
            letras++;
        }
        else if (cadena[i]>=48&&cadena[i]<=57)
        {
            numeros++;
        }
        else{
            especiales++;
        }
    }
    printf("Palabras = %i\nLetras = %i\nNumeros = %i\nEspeciales = %i",palabras,letras,numeros,especiales);
    return 0;
}

