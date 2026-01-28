/**
 * @file Programa.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"tools.h"

struct Alumno       //ESTRUCTURAS INTERIORES
{
    char nombre[50];
    int nolista;
    int boleta;
    int anioI;
    char carrera[15];
    char turno[15];
};
struct Profesor
{
    char nombre[50];
    int empleado;
    char turno[15];
};
struct Fecha
{
    int dia;
    int mes;
    int anio;
};

typedef struct Alumno Alumno;
typedef struct Profesor Profesor;
typedef struct Fecha Fecha;

struct Lista       //ESTRUCTURA PRINCIPAL
{
    Fecha fecha;
    char unidad[50];
    char grupo[5];
    Profesor profesor;
};

typedef struct Lista Lista;             
Alumno alumnos;    //VARIABLE SOLO PARA LA ESTRUCTURA "ALUMNOS"
//int contador=0; //VARIABLE PARA EL NUMERO DE LISTA
FILE *lista;
void modificar(int num);

int main(int argc, char const *argv[])
{
    int respuesta,numero;
    Lista registro;
    const int numItems = 8;
    char* items[numItems];
    
    //MENU
    items[0] = "Registrar Unidad de Aprendizaje.";
    items[1] = "Registrar Grupo.";
    items[2] = "Registrar Fecha.";
    items[3] = "Registrar Profesor.";
    items[4] = "Registrar Alumno.";
    items[5] = "Modificar Alumno.";
    items[6] = "Mostrar Lista.";
    items[7] = "Salir.";
    
    if(lista=fopen("ListaDeAlumnos.txt","rb+")==NULL)
    {
        printf("ERROR AL ABRIR EL ARCHIVO");
        exit(0);
    }
    else
    {

     while (respuesta!=7)
     {
        respuesta = showMenu(numItems, items, "Lista de alumnos.");
        //REGISTRO DE DATOS DEL MENU
        switch (respuesta)
        {
        case 0:
            fflush(stdin);
            printf("Registrar Unidad de Aprendizaje: ");
            fgets(registro.unidad,50,stdin);
            registro.unidad[strlen(registro.unidad)-1]='\0';
            
            lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
            fseek(lista,0,SEEK_SET);
            fwrite(&registro,sizeof(Lista),1,lista);
            fclose(lista);
            break;

        case 1:
            fflush(stdin);
            printf("Registrar Grupo: ");
            fgets(registro.grupo,5,stdin);
            registro.grupo[strlen(registro.grupo)-1]='\0';
            
            lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
            fseek(lista,0,SEEK_SET);
            fwrite(&registro,sizeof(Lista),1,lista);
            fclose(lista);
            break;

        case 2:
            fflush(stdin);
            printf("Registrar Fecha(dd/mm/aa): ");
            scanf("%i/%i/%i",&registro.fecha.dia,&registro.fecha.mes,&registro.fecha.anio);
            fflush(stdin);
            lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
            fseek(lista,0,SEEK_SET);
            fwrite(&registro,sizeof(Lista),1,lista);
            fclose(lista);
            break;

        case 3:
            fflush(stdin);
            printf("Registrar Profesor.\nNombre: ");
            fgets(registro.profesor.nombre,50,stdin);
            registro.profesor.nombre[strlen(registro.profesor.nombre)-1]='\0';
            printf("\nNumero de empleado: ");
            scanf("%i",&registro.profesor.empleado);
            fflush(stdin);
            printf("\nTurno: ");
            fgets(registro.profesor.turno,15,stdin);
            registro.profesor.turno[strlen(registro.profesor.turno)-1]='\0';
            
            lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
            fseek(lista,0,SEEK_SET);
            fwrite(&registro,sizeof(Lista),1,lista);
            fclose(lista);
            break;

        case 4:
            fflush(stdin);
            printf("Registrar Alumno No.%i.\nNombre: ",alumnos.nolista);
            fgets(alumnos.nombre,50,stdin);
            alumnos.nombre[strlen(alumnos.nombre)-1]='\0';
            printf("\nBoleta: ");
            scanf("%i",&alumnos.boleta);
            fflush(stdin);
            printf("\nAnio de inicio: ");
            scanf("%i",&alumnos.anioI);
            fflush(stdin);
            printf("\nCarrera: ");
            fgets(alumnos.carrera,15,stdin);
            alumnos.carrera[strlen(alumnos.carrera)-1]='\0';
            printf("\nTurno: ");
            fgets(alumnos.turno,15,stdin);
            alumnos.turno[strlen(alumnos.turno)-1]='\0';
            
            lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
            fseek(lista,sizeof(Lista)+(alumnos.nolista*sizeof(Alumno)),SEEK_SET);
            fwrite(&alumnos,sizeof(Alumno),1,lista);
            fclose(lista);
            alumnos.nolista++;
            break;

        case 5:
            fflush(stdin);
            printf("Ingrese el numero de lista del alumno: ");
            scanf("%i",&numero);
            fflush(stdin);
            modificar(numero);
            break;

        case 6:
            fflush(stdin);
            lista=fopen("ListaDeAlumnos.txt","rb"); 
            fseek(lista,0,SEEK_SET);
            fread(&registro,sizeof(Lista),1,lista); // Leer
            printf("%s %s \n%i/%i/%i\n%s %i %s\n",registro.unidad,registro.grupo,registro.fecha.dia,registro.fecha.mes,registro.fecha.anio,
                                      registro.profesor.nombre,registro.profesor.empleado,registro.profesor.turno); // Imprimir
            for (size_t i = 0; i < alumnos.nolista; i++)
            {
                fseek(lista,sizeof(Lista)+(i*sizeof(Alumno)),SEEK_SET);
                fread(&registro,sizeof(Lista),1,lista);
                printf("%i.-%s %i %i %s %s",i,alumnos.nombre,alumnos.boleta,alumnos.anioI,alumnos.carrera,alumnos.turno);
            }
            fclose(lista);
            break;

        default:
            break;
        }
     }
    }
       
    return 0;
}

void modificar(int num)  //FUNCION PARA MODIFICAR
{
    fflush(stdin);
    lista=fopen("ListaDeAlumnos.txt","rb");              //Abre el archivo
    fseek(lista,sizeof(Lista)+(num*sizeof(Alumno)),SEEK_SET);
    fread(&alumnos,sizeof(Alumno),1,lista);
    fclose(lista);
    if (num>=alumnos.nolista)
    {
        printf("Alumno no registrado.");
    }
    else
    {
        printf("Modificar Alumno No.%i.\nNombre: ",num);
        fgets(alumnos.nombre,50,stdin);
        alumnos.nombre[strlen(alumnos.nombre)-1]='\0';
        printf("\nBoleta: ");
        scanf("%i",&alumnos.boleta);
        fflush(stdin);
        printf("\nAnio de inicio: ");
        scanf("%i",&alumnos.anioI);
        fflush(stdin);
        printf("\nCarrera: ");
        fgets(alumnos.carrera,15,stdin);
        alumnos.carrera[strlen(alumnos.carrera)-1]='\0';
        printf("\nTurno: ");
        fgets(alumnos.turno,15,stdin);
        alumnos.turno[strlen(alumnos.turno)-1]='\0';
            
        lista=fopen("ListaDeAlumnos.txt","rb+");              //Abre el archivo
        fseek(lista,sizeof(Lista)+(num*sizeof(Alumno)),SEEK_SET);
        fwrite(&alumnos,sizeof(Alumno),1,lista);
        fclose(lista);
        
    }
    
}