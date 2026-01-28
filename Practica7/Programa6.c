/**
 * @file Programa6.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int *arr;
    int num,cmb;
    srand(time(NULL));

    printf("Dame la cantidad del arreglo: ");
    scanf("%i",&num);
    arr=(int*)malloc(num*sizeof(int));

    for (size_t i = 0; i < num; i++)
    {
        arr[i]=rand()%2000-1000;
    }
    for (size_t i = num-1; i > 0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(*(arr+j) > *(arr+(j+1)))
            {
                cmb=*(arr+j);
                *(arr+j)=*(arr+(j+1));
                *(arr+(j+1))=cmb;
            }
        }
    }
    printf("[ ");
    for (size_t i = 0; i < num; i++)
    {
        printf("%i ",*(arr+i));
    }
    printf("]");
    free(arr);
    return 0;
    
}