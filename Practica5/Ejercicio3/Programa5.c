/**
 * @file Programa5.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int sumatoria(int numero);
int main()
{
    int numero;

    printf("Coloque un numero:");
    scanf("%i",&numero);

    printf("La suma de sus terminos es: %i",sumatoria(numero));

    return 0;
}

int sumatoria(int numero)
{
    static int suma=0;
    int n1;

    if(numero!=0)
    {
        n1=numero%10;
        numero=numero/10;
        suma=suma+n1;
        sumatoria(numero);
    }
    return suma;
}