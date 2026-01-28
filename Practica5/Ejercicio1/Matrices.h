#pragma once

#define FILA 3
#define COLUMNA 3

void ImprimeMatriz(int [FILA][COLUMNA]);                                            //Imprime la matriz
void imprimeMatrizD(double matriz[FILA][COLUMNA]);                                  //Imprime la matriz en double
void traspuesta(int matriz[FILA][COLUMNA], int matrizT[FILA][COLUMNA]);             //Calcula la traspuesta de la matriz
int determinante(int matriz[FILA][COLUMNA]);                                        //Calcula el determinante de la matriz
void adjunta(int matriz[FILA][COLUMNA], int adj[FILA][COLUMNA]);                    //Calcula la adjunta de la matriz
void inversa(int matriz[FILA][COLUMNA], double matrizI[FILA][COLUMNA]);             //Calcula la matriz inversa
void MultiplicaMatriz(int matriz[FILA][COLUMNA], double matrizB[FILA][COLUMNA]);    //Multiplica matrices de mismas dimensiones
void Multiplicacion(double matrizA[FILA][COLUMNA], int matrizB[FILA]);              //Multiplica matrices de diferentes dimensiones