#define _GNU_SOURCE
#include "readtemario.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void imprimirarchivo(char nombreArchivo[])
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(nombreArchivo, "r");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int contadorPausa = 1;

    while ((read = getline(&line, &len, fp)) != -1)
    {
        printf("%s", line);
        contadorPausa++;
        
        if (contadorPausa > 9)
        {
            printf("||==============================================================================\n");
            printf("|| >>> Presiona una tecla para continuar leyendo...");
            getch();
            printf("\n||==============================================================================\n");
            contadorPausa = 1;
        }
    }

    contadorPausa = 0;

    fclose(fp);

    if (line)
    {
        free(line);
    }
}

void readtemario(int temaId)
{
    char nombreArchivo[33] = "contenido/temarios/temario";
    itoa(temaId, nombreArchivo+26, 10);
    strcat(nombreArchivo, ".txt");

    imprimirarchivo(nombreArchivo);

    printf("\n\nSe ha terminado de leer el tema.");
    printf("\nPresiona una tecla para continuar...");
    getch();
}

void readejemplo(int temaId)
{
    char nombreArchivo[31] = "contenido/ejemplos/ejemplo";
    itoa(temaId, nombreArchivo+26, 10);
    strcat(nombreArchivo, ".txt");

    imprimirarchivo(nombreArchivo);

    printf("\n\nSe ha terminado de leer el ejemplo.");
    printf("\nPresiona una tecla para continuar...");
    getch();
}

void readejercicio(int temaId)
{
    char nombreArchivo[35] = "contenido/ejercicios/ejercicio";
    itoa(temaId, nombreArchivo+30, 10);
    strcat(nombreArchivo, ".txt");

    imprimirarchivo(nombreArchivo);

    printf("\n\nSe ha terminado de leer el ejercicio.");
    printf("\nPresiona una tecla para continuar...");
    getch();
}

float convertiranios(int cantidadAnios, int tiempoConvertirId)
{
    int arregloTiempo[9] = { 2, 3, 4, 6, 12, 24, 52, 360 };

    int auxiliarTiempo = arregloTiempo[tiempoConvertirId];

    float resultado = cantidadAnios * auxiliarTiempo;

    return resultado;
}

float convertirsemestres(int cantidadSemestres, int tiempoConvertirId)
{

    printf("  1. a%cos\n", 164);
    printf("  2. cuatrimestres\n");
    printf("  3. trimestres\n");
    printf("  4. bimestres\n");
    printf("  5. meses\n");
    printf("  6. quincenas\n");
    printf("  7. semanas\n");
    printf("  8. dias\n");

    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadSemestres / 2;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = ((cantidadSemestres * 6) / 4);
    }
    if (tiempoConvertirId == 3)
    {
        resultado = ((cantidadSemestres * 6) / 3);
    }
    if (tiempoConvertirId == 4)
    {
        resultado = ((cantidadSemestres * 6) / 2);
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadSemestres * 6);
    }
    if (tiempoConvertirId == 6)
    {
        resultado = ((cantidadSemestres * 6) * 2);
    }
    if (tiempoConvertirId == 7)
    {
        resultado = ((cantidadSemestres * 6) * 4);
    }
    if (tiempoConvertirId == 8)
    {
        resultado = ((cantidadSemestres * 6) * 30);
    }

    return resultado;
}

float convertircuatrimeses(int cantidadCuatrimeses, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadCuatrimeses / 3;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = ((cantidadCuatrimeses * 4) / 6);
    }
    if (tiempoConvertirId == 3)
    {
        resultado = ((cantidadCuatrimeses * 4) / 3);
    }
    if (tiempoConvertirId == 4)
    {
        resultado = ((cantidadCuatrimeses * 4) / 2);
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadCuatrimeses * 4);
    }
    if (tiempoConvertirId == 6)
    {
        resultado = ((cantidadCuatrimeses * 4) * 2);
    }
    if (tiempoConvertirId == 7)
    {
        resultado = ((cantidadCuatrimeses * 4) * 4);
    }
    if (tiempoConvertirId == 8)
    {
        resultado = ((cantidadCuatrimeses * 4) * 30);
    }

    return resultado;
}

float convertirtrimestres(int cantidadTrimestres, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadTrimestres / 4;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadTrimestres * 3) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadTrimestres * 3) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadTrimestres * 3) / 2;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadTrimestres * 3);
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadTrimestres * 3) * 2;
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadTrimestres * 3) * 4;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadTrimestres * 3) * 30;
    }

    return resultado;
}

float convertirbimestres(int cantidadBimestres, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadBimestres / 6;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadBimestres * 2) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadBimestres * 2) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadBimestres * 2) / 3;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadBimestres * 2);
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadBimestres * 2) * 2;
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadBimestres * 2) * 4;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadBimestres * 2) * 30;
    }

    return resultado;
}

float convertirmeses(int cantidadMeses, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadMeses / 12;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadMeses) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadMeses) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadMeses) / 3;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadMeses) / 2;
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadMeses)*2;
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadMeses)*4;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadMeses)*30;
    }

    return resultado;
}

float convertirquincenas(int cantidadQuincenas, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadQuincenas / 24;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadQuincenas / 2) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadQuincenas / 2) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadQuincenas / 2) / 3;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadQuincenas / 2) / 2;
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadQuincenas / 2);
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadQuincenas / 2) * 4;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadQuincenas / 2) * 30;
    }

    return resultado;
}

float convertirsemanas(int cantidadSemanas, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadSemanas / 52;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadSemanas / 4) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadSemanas / 4) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadSemanas / 4) / 3;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadSemanas / 4) / 2;
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadSemanas / 4);
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadSemanas / 4) * 2;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadSemanas / 4) * 30;
    }

    return resultado;
}

float convertirdias(int cantidadDias, int tiempoConvertirId)
{
    float resultado = 0;
    if (tiempoConvertirId == 1)
    {
        resultado = cantidadDias / 360;
    }
    if (tiempoConvertirId == 2)
    {
        resultado = (cantidadDias / 30) / 6;
    }
    if (tiempoConvertirId == 3)
    {
        resultado = (cantidadDias / 30) / 4;
    }
    if (tiempoConvertirId == 4)
    {
        resultado = (cantidadDias / 30) / 3;
    }
    if (tiempoConvertirId == 5)
    {
        resultado = (cantidadDias / 30) / 2;
    }
    if (tiempoConvertirId == 6)
    {
        resultado = (cantidadDias / 30);
    }
    if (tiempoConvertirId == 7)
    {
        resultado = (cantidadDias / 30) * 2;
    }
    if (tiempoConvertirId == 8)
    {
        resultado = (cantidadDias / 30) * 4;
    }

    return resultado;
}
