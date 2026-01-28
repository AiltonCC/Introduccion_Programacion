/**
 * @file PRACTICA 2: Programa 4
 * @author Edgar Ailton Jave Chavez Contreras
 * GRUPO: 1MV2
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int centigrados,fahrenheit;

    printf("Convertidor de grados C a F\n Ingrese los grados C:  ");
    scanf("%d",&centigrados);
    
    fahrenheit=(centigrados*1.8)+32;

    printf("%d C equivalen a %d F",centigrados,fahrenheit);

    return 0;
}