/**
 * @file Programa1
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
//#include <string.h>

int main(){
    char cadena[50];
    int cuenta=0;

    printf("Ingrese una cadena texto: ");
    fgets(cadena,50,stdin);

        while(cadena[cuenta] != '\0')
        {
            cuenta++;
        }
    
    printf("Tamanio de la cadena: %i",cuenta);
    //printf("\nTamanio de la cadena: %i",strlen(cadena));
    
    
    return 0;
}