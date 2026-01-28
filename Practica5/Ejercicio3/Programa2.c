/**
 * @file Programa2.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void imprimir(int a[20]);
int main()
{
    int arr[20];
    srand(time(NULL));

    for(size_t i=0; i<20;i++)
    {
        arr[i]=10+(rand()%90);
        
    }
    imprimir(arr);
    return 0;
}
void imprimir(int a[20]) {
    static int i = 0;
    if(i < 20) {
        printf("%i ", a[i]);
        i++;
        imprimir(a);
    }
}