/**
 * @file Programa6.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 10000
void imprimir(int a[MAX]);
void ordena(int arreglo[MAX]);
int main()
{
    static int arr[MAX];
    srand(time(NULL));

    for(size_t i=0; i<MAX;i++)
    {
        arr[i]=1+(rand()%100000);
        
    }
    ordena(arr);
    imprimir(arr);
    return 0;
}
void imprimir(int a[MAX]) {
    static int i = 0;
    if(i < MAX) {
        printf("%i ", a[i]);
        i++;
        imprimir(a);
    }
}
void ordena(int arreglo[MAX])
{
    int cmb=0;
    static int i=MAX;
    if (i > 0)
    {
        
       
        for(size_t j=0; j < i; j++)
        {
            
            if(arreglo[j] < arreglo[j+1])
            {
                cmb=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=cmb;
                
            }
            
        }
        --i;
        ordena(arreglo);
    }
    
}