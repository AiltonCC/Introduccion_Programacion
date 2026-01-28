/**
 * @file Programa5.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);

        if (caracter>=97&&caracter<=122)
        {
            printf("%c es una letra minuscula.",caracter);
        }
        else if (caracter>=65&&caracter<=90)
        {
            printf("%c es una letra mayuscula.",caracter);
        }
        else if (caracter>=48&&caracter<=57)
        {
            printf("%c es un numero.",caracter);
        }
        else{
            printf("%c es un caracter especial.",caracter);
        }
    
    return 0;
}