/**
 * @file Practica 3: Programa 5
 * @author Edgar Ailton Jave Chavez Contreras
 * @grupo: 1MV2 
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0;
    int a=1;
    
    printf("Triangulo de Floyd\nSerie armonica\nIngrese el numero de filas: ");
    scanf("%d",&numero);

    for (size_t i = 1; i <= numero; i++)    //1<=5;2<=5
    {
        for (size_t c = 1; c <= i; c++)     //1<=1 2<=1"se cancela el 2do for";1<=2
        {
            printf("%d ",a);
            a++;
            a=a%2;
        }
        printf("\n");
    }
    return 0;
}
