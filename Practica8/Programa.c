/**
 * @file Programa.c
 * @author Chavez Contreras Edgar Ailton Jave
 * @brief 1MV2
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"tools.h"

struct Alumno       //ESTRUCTURAS INTERIORES
{
    char nombre[50];
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
Alumno *alumnos;    //VARIABLE SOLO PARA LA ESTRUCTURA "ALUMNOS"
int contador=0; //VARIABLE PARA LA MEMORIA DINAMICA
void eliminar(int num);

int main(int argc, char const *argv[])
{
    int respuesta,numero;
    Lista registro;
    const int numItems = 7;
    char* items[numItems];

    alumnos=(Alumno*)calloc(1,sizeof(Alumno));
    //MENU
    items[0] = "Registrar Unidad de Aprendizaje.";
    items[1] = "Registrar Grupo.";
    items[2] = "Registrar Fecha.";
    items[3] = "Registrar Profesor.";
    items[4] = "Registrar Alumno.";
    items[5] = "Eliminar Alumno.";
    items[6] = "Salir.";
    
    while (respuesta!=6)
    {
        respuesta = showMenu(numItems, items, "Lista de alumnos.");
        //REGISTRO DE DATOS DEL MENU
        switch (respuesta)
        {
        case 0:
            printf("Registrar Unidad de Aprendizaje: ");
            fgets(registro.unidad,50,stdin);
            break;
        case 1:
            printf("Registrar Grupo: ");
            fgets(registro.grupo,5,stdin);
            break;
        case 2:
            printf("Registrar Fecha(dd/mm/aa): ");
            scanf("%i/%i/%i",&registro.fecha.dia,&registro.fecha.mes,&registro.fecha.anio);
            fflush(stdin);
            break;
        case 3:
            printf("Registrar Profesor.\nNombre: ");
            fgets(registro.profesor.nombre,50,stdin);
            printf("\nNumero de empleado: ");
            scanf("%i",&registro.profesor.empleado);
            fflush(stdin);
            printf("\nTurno: ");
            fgets(registro.profesor.turno,15,stdin);
            break;
        case 4:
            printf("Registrar Alumno No.%i.\nNombre: ",contador);
            fgets((alumnos+contador)->nombre,50,stdin);
            printf("\nBoleta: ");
            scanf("%i",&(alumnos+contador)->boleta);
            fflush(stdin);
            printf("\nAnio de inicio: ");
            scanf("%i",&(alumnos+contador)->anioI);
            fflush(stdin);
            printf("\nCarrera: ");
            fgets((alumnos+contador)->carrera,15,stdin);
            printf("\nTurno: ");
            fgets((alumnos+contador)->turno,15,stdin);
            contador++;
            alumnos=(Alumno*)realloc(alumnos,(contador+1)*sizeof(Alumno));
            break;
        case 5:
            printf("Ingrese el numero de lista del alumno: ");
            scanf("%i",&numero);
            fflush(stdin);
            eliminar(numero);
            break;
        default:
            break;
        }
    }
    //IMPRIME LOS DATOS DE LA UNIDAD,FECHA,GRUPO Y PROFESOR
    printf("%s %s %i/%i/%i\n%s %i %s\n",registro.unidad,registro.grupo,registro.fecha.dia,registro.fecha.mes,registro.fecha.anio,
                                        registro.profesor.nombre,registro.profesor.empleado,registro.profesor.turno);
    //IMPRIME LOS DATOS DE CADA ALUMNO
    for (size_t i = 0; i < contador; i++)
    {
        printf("%i.-%s %i %i %s %s",i,alumnos[i].nombre,alumnos[i].boleta,alumnos[i].anioI,alumnos[i].carrera,alumnos[i].turno);
    }
    free(alumnos);
        
    return 0;
}

void eliminar(int num)  //FUNCION PARA ELIMINAR 
{
    for (size_t i = num; i < contador; i++)
    {
        alumnos[i]=alumnos[i+1];
    }
    alumnos=(Alumno*)realloc(alumnos,(contador)*sizeof(Alumno));
    contador--;
}