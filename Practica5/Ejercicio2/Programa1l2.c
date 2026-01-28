/**
 * @file Programa 1.2.c
 * @author Edgar Ailton Jave Chavez Contreras
 * @brief  1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
void CambiaValores(int n1,int n2);
int main()
{
    int numero1,numero2;

    printf("Coloque dos numeros:");
    scanf("%i %i",&numero1,&numero2);

    printf("Numero 1:%i\nNumero 2:%i\n",numero1,numero2);

    CambiaValores(numero1,numero2);
 return 0;
  
}

void CambiaValores(int n1,int n2)
{
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("Numero 1:%i\nNumero 2:%i",n1,n2);
}