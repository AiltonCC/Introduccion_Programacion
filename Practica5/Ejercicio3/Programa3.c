/**
 * @file Programa3.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void encuentra(int arreglo[20]);
int main()
{
    int arr[20];
    srand(time(NULL));

    for(size_t i=0; i<20;i++)
    {
        arr[i]=50+(rand()%450);
        printf("%i ",arr[i]);
        
    }
    encuentra(arr);
    printf("\nNumero mas grande:%i\nNumero mas chico:%i",arr[19],arr[0]);
    return 0;
}

void encuentra(int arreglo[20])
{
    int cmb=0;
    static int i=19;
    if (i > 0)
    {
        
       
        for(size_t j=0; j < i; j++)
        {
            
            if(arreglo[j] > arreglo[j+1])
            {
                cmb=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=cmb;
                
            }
            
        }
        --i;
        encuentra(arreglo);
    }
    
}
