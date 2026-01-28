/**
 * @file PRACTICA 2: Programa 2
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
    int x,xs,y,ys;      //x1,x2,y1,y2 variables correspondientes
    float resultado;

    printf("Distancia entre dos puntos A(x1,y1) B(x2,y2).\n");
    printf("Ingrese los valores de las coordenadas x1,x2,y1,y2: ");
    scanf("%d %d %d %d",&x,&xs,&y,&ys); //Se asignan valores a x1,x2,y1,y2

    resultado=sqrt(pow(x-xs,2)+pow(y-ys,2));    //Calculo siguiendo la formula de distancia entre dos puntos

    printf("La distancia de los puntos A(%d,%d) y B(%d,%d) es: %.2f",x,y,xs,ys,resultado);

    return 0;
}