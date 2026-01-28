/**
 * @file PRACTICA 2: Programa 3
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
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d",&numero); //Se escanea el numero ingresado y se asigna a la variable

    printf("El numero %d es %s",numero,(numero%2)==1?"Impar":"Par");
    //Se lee la condicion e indica el resultado
    return 0;
}