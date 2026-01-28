/**
 * @file Programa4.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int cuentaterminos(int n);
int main()
{
    int numero;

    printf("Ingresa un numero:");
    scanf("%i",&numero);

    printf("El numero de terminos son: %i",cuentaterminos(numero));
    return 0;
}

int cuentaterminos(int n)
{
    static int contador=0,divisor=1,cociente=1;
    if(cociente>0)
    {
        contador++;
        divisor=divisor*10;
        cociente=n/divisor;
        cuentaterminos(n);
    }
    return contador;
}