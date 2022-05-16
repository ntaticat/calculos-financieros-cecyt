#define _GNU_SOURCE
#include "readtemario.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
            getchar();
            printf("||==============================================================================\n");
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
    getchar();
}

void readejemplo(int temaId)
{
    char nombreArchivo[31] = "contenido/ejemplos/ejemplo";
    itoa(temaId, nombreArchivo+26, 10);
    strcat(nombreArchivo, ".txt");

    imprimirarchivo(nombreArchivo);

    printf("\n\nSe ha terminado de leer el ejemplo.");
    printf("\nPresiona una tecla para continuar...");
    getchar();
}

void readejercicio(int temaId)
{
    char nombreArchivo[35] = "contenido/ejercicios/ejercicio";
    itoa(temaId, nombreArchivo+30, 10);
    strcat(nombreArchivo, ".txt");

    imprimirarchivo(nombreArchivo);

    printf("\n\nSe ha terminado de leer el ejercicio.");
    printf("\nPresiona una tecla para continuar...");
    getchar();
}