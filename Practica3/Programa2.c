/**
 * @file Practica 3: Programa 2
 * @author Edgar Ailton Jave Chavez Contreras
 * @grupo: 1MV2 
 * @version 0.1
 * @date 2022-09-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>


void sucesionfibonacci(int arr[],int length);

int main()
{
    int n=0;
    int ns=1;
    int numero=0;
    int fibonacci=0;
    int secuencia[numero];

    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    
    for (size_t i = 0; i < numero; i++)
    {
        n=ns;               //1,0,1,1,2,3...
        ns=fibonacci;       //0,1,1,2,3,5..
        fibonacci=n+ns;     //1,1,2,3,5,8...
        secuencia[i]=fibonacci;
        
    }
    
   sucesionfibonacci(secuencia,numero);
    return 0;
    
}
void sucesionfibonacci(int arr[],int length)
{
    printf("La sucesion de fibonacci es: ") ;
     for (size_t i = 0; i < length; i++)
    {
        printf("%i ", arr[i]);
    }
}