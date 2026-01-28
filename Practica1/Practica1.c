/*
Edgar Ailton Jave Chavez Contreras
2023640251
Practica no.1
20/08/2022
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    
    char nom[50];           //variable para el nombre
    int a,e;                //variables a=año e=edad 
    float estatura;

    printf("Inserte su nombre completo: \n");
    fgets(nom,50,stdin);                        //Se escanea la cadena de caracteres incluyendo espacios

    printf("Bienvenido %s, porfavor coloque su edad y estatura(m): \n",nom);
    scanf("%d %f", &e, &estatura);              //Se escanean las variables de edad y esatatura

    printf("Verifique si sus datos son correctos: \n");
    a=2022-e;                                   //Se realiza un calculo para representar a la variable año

    printf("Nombre: %s\nEdad: %daños\nAño de Nacimiento: %d\nEstatura: 0%.2fm\n", nom, e, a, estatura);
    // Se muestran todas las variables con sus valores
    
    int r;                      //Se realiza una pequeña encuesta
    printf("Son correctos los datos?(si=1,no=0): ");
    scanf("%d",&r);

    if(r==1){
        printf("Obtuve 10?");
    }
    else{
        printf("No me repruebe :(");
    }

    return 0;

}