#include "readtemario.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <dos.h>

int main()

{
    int opcion1, opcion2;
    float tiempo1, tiempo2;
    int OpcionMenu, OpcionTema, OpcionEjemplo, OpcionEjercicio;
    int Usuario[100];

    time_t ahora;
    struct tm *fecha;
    time(&ahora);
    fecha = localtime(&ahora);

    //********************************************************************************************

    printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);

    system("color 4F");
    printf("\n                          Proyecto Aula. Equipo 5\n\n");
    printf("\n                          ------------------------\n");
    printf("                          | Calculos Financieros |");
    printf("\n                          ------------------------\n\n\n");
    printf("     El objetivo de este programa, es servir como una herramienta de apoyo\n     educativo a los estudiantes que quieran estudiar la materia de\n     Calculos Financieros I.\n\n\n");

    printf("     Agregue un nombre de usuario: ");
    scanf("%s", Usuario);

    system("cls");
    printf("\n\n");
    printf("\n                        _____________________________");
    printf("\n                        #############################");
    printf("\n                        .............................");
    printf("\n                        *****************************");
    printf("\n                        -----------------------------\n");
    printf("\n                          Bienvenido, %s\n", Usuario);
    printf("\n                        -----------------------------");
    printf("\n                        *****************************");
    printf("\n                        .............................");
    printf("\n                        #############################");
    printf("\n                        _____________________________");

    printf("\n\n\n                       Presione Enter para continuar...");
    getch();
    system("cls");

    //********************************************************************************************

    do
    {

        system("color 5F");

        printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);

        printf("\n------------------------------");
        printf("   Menu Principal   ");
        printf("------------------------------\n\n");
        printf("    Nombre de Usuario: %s\n\n\n", Usuario);
        printf("       1. Temas.\n\n");
        printf("       2. Ejemplos.\n\n");
        printf("       3. Ejercicios.\n\n");
        printf("       4. Conversor de Tiempo.\n\n");
        printf("       5. Salir del programa.\n\n\n\n");
        printf("       Seleccione una opcion: ");
        scanf("%i", &OpcionMenu);

        switch (OpcionMenu)
        {
        case 1:
            do
            {
                system("cls");
                system("color 0F");
                printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);

                printf("\n-------------------------------");
                printf("     Temas     ");
                printf("----------------------------------\n\n");

                printf("       1. Porcentajes\n\n");
                printf("       2. Reparto Proporcional\n\n");
                printf("       3. Prorrateo de Gastos\n\n");
                printf("       4. Interes Simple\n\n");
                printf("       5. Monto Simple\n\n");
                printf("       6. Descuento Simple\n\n");
                printf("       7. Valor Efectivo\n\n");
                printf("       8. Factorajes\n\n");
                printf("       9. Salir\n\n");

                printf("\n       Seleccione una opcion: ");
                scanf("%i", &OpcionTema);

                if (OpcionTema >= 1 && OpcionTema <= 8)
                {
                    system("cls");
                    system("color  9F");
                    readtemario(OpcionTema);
                }
                else if (OpcionTema == 9)
                {
                    system("cls");
                    printCreeper();
                }
                else
                {
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                }

            } while (OpcionTema != 9);
            break;

        case 2:
            do
            {

                system("cls");
                system("color 0F");
                printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);

                printf("\n------------------------------");
                printf("     Ejemplos     ");
                printf("--------------------------------\n\n");

                printf("       1. Porcentajes\n\n");
                printf("       2. Reparto Proporcional\n\n");
                printf("       3. Interes Simple\n\n");
                printf("       4. Monto Simple\n\n");
                printf("       5. Descuento Simple\n\n");
                printf("       6. Valor Efectivo\n\n");
                printf("       7. Factorajes\n\n");
                printf("       8. Salir\n\n");

                printf("\n       Seleccione una opcion: ");
                scanf("%i", &OpcionEjemplo);

                if (OpcionEjemplo >= 1 && OpcionEjemplo <= 7)
                {
                    system("cls");
                    system("color  9F");
                    readejemplo(OpcionEjemplo);
                }
                else if (OpcionEjemplo == 8)
                {
                    system("cls");
                    printCreeper();
                }
                else
                {
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                }
            } while (OpcionEjemplo != 8);
            break;

        case 3:
            do
            {
                system("cls");
                system("color 0F");
                printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);

                printf("\n------------------------------");
                printf("     Ejercicios    ");
                printf("-------------------------------\n\n");

                printf("       1. Porcentajes\n\n");
                printf("       2. Reparto Proporcional\n\n");
                printf("       3. Interes Simple\n\n");
                printf("       4. Monto Simple\n\n");
                printf("       5. Descuento Simple\n\n");
                printf("       6. Valor Efectivo\n\n");
                printf("       7. Factorajes\n\n");
                printf("       8. Salir\n\n");

                printf("\nSeleccione una opcion: ");
                scanf("%i", &OpcionEjercicio);

                if (OpcionEjercicio >= 1 && OpcionEjercicio <= 7)
                {
                    system("cls");
                    system("color  9F");
                    readejemplo(OpcionEjercicio);
                }
                else if (OpcionEjercicio == 8)
                {
                    system("cls");
                    printCreeper();
                }
                else
                {
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                }
            } while (OpcionEjercicio != 8);
            break;

        case 4:
            system("cls");
            printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);
            system("cls");
            printf("\n     Conversor de Tiempo(n)\n");
            printf("\n  -------------------------------------------------------------------\n\n");

            realizarOperacion();
            break;

        case 5:
            break;

        default:
            system("cls");
            printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu");
            break;
        }
        system("cls");
    } while (OpcionMenu != 5);
    system("cls");
    printCreeper();
    return 0;
}

void printCreeper()
{
    printf("\n    ################################");
    printf("\n    ################################");
    printf("\n    ####       ###########       ###");
    printf("\n    ####       ###########       ###");
    printf("\n    ####       ###########       ###");
    printf("\n    ################################");
    printf("\n    #############       ############");
    printf("\n    #############       ############");
    printf("\n    #############       ############");
    printf("\n    #####                      #####");
    printf("\n    #####                      #####");
    printf("\n    #####       #########      #####");
    printf("\n    #####       #########      #####");
    printf("\n    ################################");
    printf("\n    ################################");
    printf("\n\n    Saliendo...");
    sleep(3);
}

void realizarOperacion()
{
    int resultadoOperacion1 = operacion1();
    int resultadoOperacion2 = operacion2(resultadoOperacion1);

    float resultadoFinal = 0;
    if (resultadoOperacion1 == 1)
    {
        resultadoFinal = convertiranios(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 2)
    {
        resultadoFinal = convertirsemestres(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 3)
    {
        resultadoFinal = convertircuatrimeses(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 4)
    {
        resultadoFinal = convertirtrimestres(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 5)
    {
        resultadoFinal = convertirbimestres(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 6)
    {
        resultadoFinal = convertirmeses(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 7)
    {
        resultadoFinal = convertirquincenas(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 8)
    {
        resultadoFinal = convertirsemanas(3, resultadoOperacion2);
    }
    if (resultadoOperacion1 == 9)
    {
        resultadoFinal = convertirdias(3, resultadoOperacion2);
    }

    printf("El resultado es %f", resultadoFinal);
    getch();
}

int operacion1()
{
    int opcion1 = 0;

    printf("  Tiempo que se va a convertir:\n\n");
    printf("  1. a%cos\n", 164);
    printf("  2. semestres\n");
    printf("  3. cuatrimestres\n");
    printf("  4. trimestres\n");
    printf("  5. bimestres\n");
    printf("  6. meses\n");
    printf("  7. quincenas\n");
    printf("  8. semanas\n");
    printf("  9. dias\n");
    printf("  10. Salir\n");

    printf("\n  Seleccione una opcion: ");
    scanf("%i", &opcion1);
    return opcion1;
}

int operacion2(int primeraOpcion)
{
    int opcion2 = 0;

    char arregloTiempo[9][100] = {
        {"Anios"},
        {"Semestres"},
        {"Cuatrimestres"},
        {"Trimestres"},
        {"Bimestres"},
        {"Meses"},
        {"Quincenas"},
        {"Semanas"},
        {"Dias"}};

    printf("  A que tiempo desea convertir:\n\n");

    int indiceMostrado = 1;

    for (int i = 0; i < 9; ++i)
    {
        if (i + 1 == primeraOpcion)
        {
            continue;
        }

        printf("%i. %s \n", indiceMostrado, arregloTiempo[i]);

        if (i + 1 == 8)
        {
            printf("%i. Salir", i + 2);
        }

        indiceMostrado++;
    }

    printf("\n  Seleccione una opcion: ");
    scanf("%i", &opcion2);
    return opcion2;
}