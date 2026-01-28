/**
 * @file Programa3.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    int auxiliar=0,max,contador;
     size_t tamanio;

    printf("Ingrese una cadena texto: ");
    fgets(cadena,50,stdin);

    tamanio=strlen(cadena);

    for (size_t i = 0; i < tamanio; i++)
    {
        contador=0;
        for (size_t j = 0; j < tamanio; j++)
        {
            if(cadena[j]==cadena[i]){
                contador++;
            }
        }
        if(contador>auxiliar)
        {
            max=cadena[i];
            auxiliar=contador;
        }
        
    }
    printf("El caracter con mas repeticiones es %c con %i veces.",max,auxiliar);
    return 0;
}