/**
 * @file Programa4.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void maslarga(char cad[]);
void mascorta(char cad[]);

int main(){
    char cadena[50];

    printf("Ingrese una cadena texto: ");
    fgets(cadena,50,stdin);

    maslarga(cadena);
    mascorta(cadena);
    return 0;
}

void maslarga(char cad[])
{
    int maxLong=0,actLong=0,maxInicial=0,actInicial=0;
    
    for (size_t i = 0; cad[i]; i++)
    {
        if (cad[i] != ' ')
        {
            if(actLong==0){
                actInicial=i;
            }
            actLong++;
        } 
        if (actLong > maxLong)
        {
            maxLong=actLong;
            maxInicial=actInicial;
        }
        if (cad[i] == 32)
        {
            actLong=0;
        }  
    }
    for (size_t j = maxInicial; j < maxInicial+maxLong; j++)
    {
        printf("%c",cad[j]);
    }
}

void mascorta(char cad[])
{
    int actLong=0,maxInicial=0,actInicial=0;
    int maxLong=50;
    
    for (size_t i = 0; cad[i]; i++)
    {
        if (cad[i] != ' ')
        {
            if(actLong==0){
                actInicial=i;
            }
            actLong++;
        }    
        if (cad[i] == 32)
        {
            if (actLong < maxLong)
           {
            maxLong=actLong;
            maxInicial=actInicial;
           } 
            actLong=0;
        }  
    }
   printf("\n");
   for (size_t j = maxInicial; j < maxInicial+maxLong; j++)
    {
        printf("%c",cad[j]);
    }

}