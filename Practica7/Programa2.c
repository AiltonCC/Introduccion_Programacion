/**
 * @file Programa2.c
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
void sumaR(int *suma,int *x,int *y);
int main()
{
    int n1,n2,suma;
    
    printf("Dame 2 numeros: ");
    scanf("%i %i",&n1,&n2);
    sumaR(&suma,&n1,&n2);
    printf("La suma de los numeros es: %i",suma);
    return 0;
}
void sumaR(int *suma,int *x,int *y)
{
    *suma=*x+*y;
}
