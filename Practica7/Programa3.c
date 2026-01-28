/**
 * @file Programa3.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arreglo;
    int contador=0;
    char numero[1];

    arreglo=(int*)calloc(1,sizeof(int));
    printf("Coloque los numeros del arreglo y despues presione x: ");

    while(1)
    {
        gets(numero);

        if(numero[0]=='x')
        {
            printf("[ ");
            for (size_t i = 0; i < contador; i++)
            {
                printf("%i ",*(arreglo+i));
            }
            printf("]");
            break;
            
        }
        
        *(arreglo+contador)=atoi(numero);
        contador++;
        arreglo=(int*)realloc(arreglo,(contador+1)*sizeof(int));
            
        
    }
    free(arreglo);
    return 0;
}