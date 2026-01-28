/**
 * @file Programa 2
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief  1MV2
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define FILA 3
#define COLUMNA 3

void ImprimeMatriz(int [FILA][COLUMNA]);

int main()
{
    int MA[FILA][COLUMNA];
    int MB[FILA][COLUMNA];
    int MC[FILA][COLUMNA];
    int MD[FILA][COLUMNA];
    int ME[FILA][COLUMNA];
    int numero=0,c,suma;
    
   printf("Coloca los elementos de la matriz A:");
   for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
           scanf("%i",&numero);
           MA[i][j]=numero;
        }
        
    }
    ImprimeMatriz(MA);

    printf("Coloca los elementos de la matriz B:");
   for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
           scanf("%i",&numero);
           MB[i][j]=numero;
        }
        
    }
    ImprimeMatriz(MB);

    //Calcula A+B
    printf("La suma de A y B es:\n");
   for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
           MC[i][j]=MA[i][j]+MB[i][j];
        }
        
    }
    ImprimeMatriz(MC);

    //Calcula A-B
    printf("La resta de A y B es:\n");
   for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
           MD[i][j]=MA[i][j]-MB[i][j];
        }
        
    }
    ImprimeMatriz(MD);

    //Calcula A*B
    printf("La multiplicacion de A y B es:\n");
   for (size_t i = 0; i < FILA; i++)
    {
        c=0;
        while(c<FILA)
        {
         suma=0;
         for (size_t j = 0; j < COLUMNA; j++)
         {
              suma = suma + (MA[i][j]*MB[j][c]);
              
         }
           MD[i][c]=suma;
              c++;
         
        } 
    }
    ImprimeMatriz(MD);

    return 0;
}    

void ImprimeMatriz(int matriz[FILA][COLUMNA])
{
    for (size_t i = 0; i < FILA; i++)
    {
        printf("[");
        for (size_t j = 0; j < COLUMNA; j++)
        {
           printf("%i ",matriz[i][j]);
        }
        printf("]\n");
        
    }
    
}