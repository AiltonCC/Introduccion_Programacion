/**
 * @file Programa6.c
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
#include <ctype.h>

int main(){
    char cadena[50];
    int contador=0;
    size_t tamanio;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena,50,stdin);

    for (size_t i = 0; cadena[i] != '\0'; ++i)
    {
		cadena[i] = tolower(cadena[i]);
	}
    
    tamanio=strlen(cadena);
    printf("\n");

    for(size_t i=97; i<=122; i++){

        for(size_t j=0; j<tamanio; j++)
        {
            if (cadena[j]==i)
            {
                contador++;
            }
        }
        if (contador==0)
        {
            continue;
        }
        else{
           printf("%c se repite %d veces\n",i,contador);
           contador=0;
        }
    }
    return 0;
}
