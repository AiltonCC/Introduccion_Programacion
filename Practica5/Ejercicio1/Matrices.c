#pragma once
#include <stdio.h>
#define FILA 3
#define COLUMNA 3
/**
 * @brief Imprime la matriz
 * 
 */
void ImprimeMatriz(int matriz[FILA][COLUMNA])
{
    for (size_t i = 0; i < FILA; i++)
    {
        printf("[");
        for (size_t j = 0; j < COLUMNA; j++)
        {
           printf("%3i ",matriz[i][j]);
        }
        printf("]\n");
        
    }
    
}

/**
 * @brief Imprime la matriz en double
 * 
 * @param matriz 
 */
void imprimeMatrizD(double matriz[FILA][COLUMNA]) {
    for (size_t i = 0; i < FILA; i++)
    {
        printf("[ ");
        for (size_t j = 0; j < COLUMNA; j++)
        {
            printf("%7.2lf ", matriz[i][j]);
        }
        printf("]\n");
    }
}

/**
 * @brief Calcula la matriz transpuesta
 * 
 */
void traspuesta(int matriz[FILA][COLUMNA], int matrizT[FILA][COLUMNA]) {
    for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
            matrizT[j][i] = matriz[i][j];
        }
    }
}

/**
 * @brief Calcula el determinante
 * 
 * @param matriz 
 * @return Devuelve un entero 
 */
int determinante(int matriz[FILA][COLUMNA]) {
    int det =  (matriz[0][0]*matriz[1][1]*matriz[2][2]) +
                    (matriz[0][1]*matriz[1][2]*matriz[2][0]) +
                    (matriz[0][2]*matriz[1][0]*matriz[2][1]) -
                    (matriz[2][0]*matriz[1][1]*matriz[0][2]) -
                    (matriz[2][1]*matriz[1][2]*matriz[0][0]) -
                    (matriz[2][2]*matriz[1][0]*matriz[0][1]);
    return det;
}

/**
 * @brief Calcula la adjunta
 * 
 * @param matriz
 */
void adjunta(int matriz[FILA][COLUMNA], int adj[FILA][COLUMNA]) {
    adj[0][0] = (+1)*((matriz[1][1]*matriz[2][2])-(matriz[2][1]*matriz[1][2]));
    adj[0][1] = (-1)*((matriz[1][0]*matriz[2][2])-(matriz[2][0]*matriz[1][2]));
    adj[0][2] = (+1)*((matriz[1][0]*matriz[2][1])-(matriz[2][0]*matriz[1][1]));
    adj[1][0] = (-1)*((matriz[0][1]*matriz[2][2])-(matriz[2][1]*matriz[0][2]));
    adj[1][1] = (+1)*((matriz[0][0]*matriz[2][2])-(matriz[2][0]*matriz[0][2]));
    adj[1][2] = (-1)*((matriz[0][0]*matriz[2][1])-(matriz[2][0]*matriz[0][1]));
    adj[2][0] = (+1)*((matriz[0][1]*matriz[1][2])-(matriz[1][1]*matriz[0][2]));
    adj[2][1] = (-1)*((matriz[0][0]*matriz[1][2])-(matriz[0][2]*matriz[1][0]));
    adj[2][2] = (+1)*((matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]));
}


/**
 * @brief Calcula la matriz inversa
 * 
 * @param matriz 
 * @param matrizI 
 */
void inversa(int matriz[FILA][COLUMNA], double matrizI[FILA][COLUMNA]) {
    int det = determinante(matriz);
    double factor = 1.0/(double)det;
    int matrizT[FILA][COLUMNA];
    int matrizA[FILA][COLUMNA];

        // Calcula la transpuesta
        traspuesta(matriz, matrizT);

        // Calcula la adjunta
        adjunta(matrizT, matrizA);

        // Calcula la inversa
        for (int i = 0; i < FILA; i++)
        {
            for (int j = 0; j < COLUMNA; j++)
            {
                matrizI[i][j] = (double)matrizA[i][j] * factor; 
            }
        }
    
}

/**
 * @brief Multiplica la matrices 3x3
 * 
 * @param matriz 
 * @param matrizB 
 */
void MultiplicaMatriz(int matriz[FILA][COLUMNA],double matrizB[FILA][COLUMNA])
{
    int c;
    double suma;
    double matrizI[FILA][COLUMNA];
    
    inversa(matriz,matrizI);
    for (size_t i = 0; i < FILA; i++)
    {
        c=0;
        while(c<FILA)
        {
         suma=0;
         for (size_t j = 0; j < COLUMNA; j++)
         {
              suma = suma + (matrizI[i][j]*matriz[j][c]);
              
         }
           matrizB[i][c]=suma;
              c++;
         
        } 
    }
    
}

/**
 * @brief Multiplica dos matrices de diferentes dimensiones
 * 
 * @param matrizA 
 * @param matrizB 
 */
void Multiplicacion(double matrizA[FILA][COLUMNA], int matrizB[FILA])
{
    double SOLUCION[FILA];
    double suma;
    for (size_t i = 0; i < FILA; i++)
    {
        
         suma=0;
         for (size_t j = 0; j < COLUMNA; j++)
         {
              suma = suma + (matrizA[i][j]*(double)matrizB[j]);
              
         }
           SOLUCION[i]=suma;
           printf("%7.2lf ",SOLUCION[i]);
    }
}
