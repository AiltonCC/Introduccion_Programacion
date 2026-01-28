/**
 * @file Programa 1.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
void imprimir(int numero);

int main()
{
    int n;

    printf("Dame un numero:");
    scanf("%i",&n);
    imprimir(n);

    return 0;
}

void imprimir(int numero)
{
    static int i=1;
    if(i<=numero)
    {
        printf("%i ",i);
        i=i+2;
        imprimir(numero);
    }
}