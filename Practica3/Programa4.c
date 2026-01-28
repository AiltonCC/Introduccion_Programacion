/**
 * @file Practica 3: Programa 4
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

void sucesionarmonica(int arr[],int length);

int main()
{
    int numero=0;
    int serie[numero];
    float suma;
    
    printf("Serie armonica\nIngrese el numero de terminos: ");
    scanf("%d",&numero);

    for (size_t i = 1; i <= numero; i++)
    {                      
        suma+=1/(float)i;
    }
   for (size_t i = 1; i <= numero; i++)
    {                      
        serie[i]=i;
    }

    printf("La suma de los %d terminos es: %.3f\n",numero,suma);
    sucesionarmonica(serie,numero);
    return 0;
}
void sucesionarmonica(int arr[],int length)
{
    printf("La sucesion armonica es: ") ;
     for (size_t i = 1; i <= length; i++)
    {
        printf("1/%i + ", arr[i]);
    }
}