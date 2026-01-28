/**
 * @file Practica 3: Programa 1
 * @author Edgar Ailton Jave Chavez Contreras
 * @grupo: 1MV2
 * @version 0.1
 * @date 2022-09-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcion;
    int numero,base,altura;
    char enter[1];
    float area,perimetro;
    const double PI=3.1416;

    do
    {
     
     printf("Calculadora de Area y Perimetro\n");
     printf("1.Circulo\n2.Cuadrado\n3.Triangulo\n4.Salir\nSeleccione una opcion: ");
     scanf("%d",&opcion);

    
     switch (opcion)
     {
     case 1:
        printf("Calculadora de Area y Perimetro del circulo\n");
        printf("Ingrese el radio: ");
        scanf("%d",&numero);

        area=(float)PI*pow((float)numero,2);
        perimetro=2*(float)PI*(float)numero;

        printf("Area= %.2f\nPerimetro= %.2f\n",area,perimetro);
        printf("Presione ENTER para volver al inicio.\n");
        gets(enter);
        break;
        
     case 2:
        printf("Calculadora de Area y Perimetro del cuadrado\n");
        printf("Ingrese un lado: ");
        scanf("%d",&numero);

        area=pow((float)numero,2);
        perimetro=(float)numero*4;

        printf("Area= %.2f\nPerimetro= %.2f\n",area,perimetro);
        printf("Presione ENTER para volver al inicio.\n");
        gets(enter);
        break;
     case 3:
        printf("Calculadora de Area y Perimetro del triangulo equilatero\n");
        printf("Ingrese la base y altura: ");
        scanf("%d %d",&base,&altura);

        area=((float)base*(float)altura)/2;
        perimetro=3*base;

        printf("Area= %.2f\nPerimetro= %.2f\n",area,perimetro);
        printf("Presione ENTER para volver al inicio.\n");
        gets(enter);
        break;
      case 4:
        printf("FIN\n");
        break;  
      default:
        printf("Opcion invalida, vuelva a intentarlo\n"); 
        break; 
        
     }
     gets(enter);
    }while(opcion!=4);

    printf("Vuelva pronto");

    return 0;
}
