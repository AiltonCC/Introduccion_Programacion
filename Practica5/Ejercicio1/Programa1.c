/**
 * @file Programa 1.1
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "Matrices.h"
#define FILA 3
#define COLUMNA 3

int main()
{
    int x[COLUMNA],y[COLUMNA],z[COLUMNA],C[FILA],c;
    int Matriz[FILA][COLUMNA];
    double Identidad[FILA][COLUMNA];
    double MatrizI[COLUMNA][FILA];
    int Determinante;

    printf("Calculadora de sistemas de 3 ecuaciones de la forma Ax+By+Cz=D\n");
    
    for (size_t i = 0; i < FILA; i++)
    {
        if(i==0)
        {
            printf("Primera ecuacion: ");
            scanf("%ix%iy%iz=%i",&x[0],&x[1],&x[2],&C[0]);
            for (size_t j = 0; j < COLUMNA; j++)
           {
              Matriz[i][j]=x[j];
           }
        }
        if(i==1)
        {
            printf("Segunda ecuacion: ");
            scanf("%ix%iy%iz=%i",&y[0],&y[1],&y[2],&C[1]);
            for (size_t j = 0; j < COLUMNA; j++)
           {
              Matriz[i][j]=y[j];
           }
        }
        if(i==2)
        {
            printf("Tercera ecuacion: ");
            scanf("%ix%iy%iz=%i",&z[0],&z[1],&z[2],&C[2]);
            for (size_t j = 0; j < COLUMNA; j++)
           {
              Matriz[i][j]=z[j];
           }
        }
    }
    ImprimeMatriz(Matriz);
    printf("\n");

    Determinante = determinante(Matriz);

   if (Determinante == 0)
   {
      printf("No hay solucion");
   }
   else{ 
    printf("La matriz identidad es: \n");
    MultiplicaMatriz(Matriz,Identidad);
    imprimeMatrizD(Identidad);

    printf("La solucion al sistema de ecuaciones es: ");
    inversa(Matriz,MatrizI);
    
    Multiplicacion(MatrizI, C);

   }
   
    return 0;
    
}