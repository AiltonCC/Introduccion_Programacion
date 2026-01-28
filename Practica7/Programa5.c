/**
 * @file Programa5.c
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
#include<ctype.h>
#ifdef _WIN32
    #include<conio.h>
#endif

int main()
{
    char c;
    int contador=0;
    int vocales=0,consonantes=0;
    char *ptr;

    #ifndef _WIN32
        system("stty raw");
    #endif

    ptr=(char*)calloc(1,sizeof(char));
    printf("Ingrese un texto: ");
    while (1)
    {
        #ifdef _WIN32
            c=getch();
        #else
            c=getc(stdin);
        #endif
        
        if (c=='.')
        {
            for (size_t i = 0; i < contador; i++)
            {
		        *(ptr+i) = tolower(*(ptr+i));//convierte a minuscula
                if (*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
                {
                    vocales++;
                }
                else if (*(ptr+i)==' ')
                {
                    continue;
                }
                else{
                    consonantes++;
                }
                
	        }
            printf("\nConsonantes= %i\nVocales= %i",consonantes,vocales);
            
            #ifndef _WIN32
               system("stty cooked");
            #endif
            exit(0);
        }
        printf("%c",c);
        *(ptr+contador)=c;
        contador++;
        ptr=(char*)realloc(ptr,(contador+1)*sizeof(char));
    }
    free(ptr);
    return 0;
}