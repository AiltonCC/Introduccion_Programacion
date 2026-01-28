/**
 * @file PRACTICA 2: Programa 5
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
    int a,b,c;
    float x,xs;

    printf("Solucion a ecuaciones cuadraticas\n");
    printf("Coloque una ecuacion cuadratica de la forma ax^2+bx+c: ");
    scanf("%dx^2+%dx+%d",&a,&b,&c);
    
    x=(-(float)b+sqrt(pow((float)b,2)-4*(float)a*(float)c))/(2*(float)a);
    //calculo para x en caso de ser +
    xs=(-(float)b-sqrt(pow((float)b,2)-4*(float)a*(float)c))/(2*(float)a);
    //calculo para x en caso de ser -

    printf("x1= %f\nx2= %f",x,xs);

    return 0;
}