/**
 * @file Programa7.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
void imprimir(int n);
int main()
{
    int numero=0;

    printf("Ingrese un numero:");
    scanf("%i",&numero);
    printf("%i ",numero);
    imprimir(numero);
}

void imprimir(int n) {
    int i = n%2;
    if(n>1){
     if(i == 0) {
        n=n/2;
        printf("%i ", n);
        imprimir(n);
     }
     if (i == 1)
     {
        n=(3*n)+1;
        printf("%i ", n);
        imprimir(n);
     }
    }
}