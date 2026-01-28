/**
 * @file Programa7.c
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
    double *sumas;
    int contador=0;
    char numero[1];

    arreglo=(int*)calloc(1,sizeof(int));
    sumas=(double*)calloc(1,sizeof(double));
    printf("Coloque los numeros a sumar y despues presione x: ");

    while(1)
    {
        gets(numero);

        if(numero[0]=='x')
        {
           for (size_t i = 0; i < contador; i++)
            {
                *sumas += (double)arreglo[i];
            }
            printf("La suma de los numeros es: %.0lf",*sumas);
            break;
            
        }
        
        *(arreglo+contador)=atoi(numero);
        contador++;
        arreglo=(int*)realloc(arreglo,(contador+1)*sizeof(int));
            
        
    }
    free(arreglo);
    free(sumas);
    return 0;
}