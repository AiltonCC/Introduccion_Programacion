/**
 * @file PRACTICA 2: Programa 1
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
#include <math.h>

int main()
{
    const double PI=3.1416;     //Se declaro a pi como constante
    int radio;
    float area,perimetro;

    printf("Area y Perimetro del circulo.\nIngrese el valor del radio: ");
    scanf("%d",&radio);

    area=PI*pow(radio,2);   //Se calcula el area utilizando su formula 
    perimetro=2*radio*PI;   //Se calcula el perimetro utilizando su formula 

    printf("Radio: %d\nPerimetro= %.2f\nArea=%.2f",radio,perimetro,area);   //Se muestran los resultados

    return 0;
}