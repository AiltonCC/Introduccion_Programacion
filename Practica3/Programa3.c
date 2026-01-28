/**
 * @file Practica 3: Programa 3
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
    int numero;
    int factorial=1;
    
    printf("Coloque un numero cualquiera: ");
    scanf("%d",&numero);

    for (size_t i = 1; i <= numero; i++)
    {                      
        factorial=factorial*i;   //1*1=1,1*2=2,2*3=6,6*4=24,24*5=120
        
    }

    printf("El numero factorial de %d es: %d",numero,factorial);
    
    return 0;
}
