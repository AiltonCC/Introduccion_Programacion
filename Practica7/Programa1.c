/**
 * @file Programa1.c
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

int main()
{
    int *suma;
    int *num;

    suma=(int*)calloc(1,sizeof(int));
    num=(int*)calloc(2,sizeof(int));

    for (size_t i = 0; i < 2; i++)
    {
        printf("Dame un numero: ");        
        scanf("%d",&num[i]);
        *suma=*suma+num[i];
    }
   
    printf("La suma de los numeros es: %i",*suma);
    free(suma);
    free(num);
    return 0;
}