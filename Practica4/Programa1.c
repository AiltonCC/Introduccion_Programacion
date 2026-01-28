/**
 * @file Programa 1
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief  1MV2
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n=0,cmb;
    int arreglo[n];

    printf("Proporcione el numero de muestras: ");
    scanf("%i",&n);
    
    srand(time(NULL));

    for (size_t i = 0; i < n; i++)
    {
        arreglo[i]=(2+rand()%10)*25;
        printf("%i ",arreglo[i]);
    }

    for (size_t i = n-1; i > 0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(arreglo[j] > arreglo[j+1])
            {
                cmb=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=cmb;
            }
        }
    }
    
    printf("\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%i ",arreglo[i]);
    }
    

}
