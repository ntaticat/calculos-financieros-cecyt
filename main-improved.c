#include "readtemario.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

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
                    printf("\n\n    Regreso al menu Principal...");
                    getch();
                }
                else
                {
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                }

            } while (OpcionTema != 9);
            printf("\n\n    Presione una tecla para ir al menu principal...");
            getch();
            system("cls");
            break;

        case 2:
            //********************************Ejemplos******************************************

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

                switch (OpcionEjemplo)
                {

                case 1:
                    system("cls");
                    system("color 1F");
                    printf("\n      Porcentaje\n\n");
                    printf("   Se vende un automovil cuyo costo es de $126900 y por haber sufrido un \n");
                    printf("   accidente se le pierde el 26 porciento de su valor. Que cantidad\n");
                    printf("   perdio?.\n\n");
                    printf("   Datos:\n");
                    printf("   B = 126900\n");
                    printf("   t = .26 porciento\n");
                    printf("   p = ?\n\n");
                    printf("   Formula:\n");
                    printf("   P = Bt\n\n");
                    printf("   Sustitucion:\n");
                    printf("   p = 126900(.26)\n\n");
                    printf("   Resultado:\n");
                    printf("   P = $32994\n");
                    getch();
                    system("cls");

                    printf("\n      Monto\n\n");
                    printf("   Se venden mesas para computadora en $4710 teniendo una utilidad del 54.37 \n");
                    printf("   porciento. Cual es el precio de costo?.\n\n");
                    printf("   Datos:\n");
                    printf("   M = 4710\n");
                    printf("   t = .5437 porciento\n");
                    printf("   B = ?\n\n");
                    printf("   Formula:\n");
                    printf("   M = (1+t)\n\n");
                    printf("   Despeje:\n");
                    printf("   B = M/(1+t)\n");
                    printf("   Sustitucion:\n");
                    printf("   B = 4710/(1+(.5437))\n\n");
                    printf("   Resultado:\n");
                    printf("   B = $3051.11\n");
                    getch();
                    system("cls");

                    printf("\n      Diferencia\n\n");
                    printf("   Se vende fotocopiadora siendo su costo de $23700 y por el uso\n");
                    printf("   se le pierde el 21.75 porciento. En cuanto se vendio?\n\n");
                    printf("   Datos:\n");
                    printf("   B = 23700\n");
                    printf("   t = .2175\n");
                    printf("   D = ?\n\n");
                    printf("   Formula:\n");
                    printf("   D = B(1-t)\n\n");
                    printf("   Sustitucion:\n");
                    printf("   D= 23700(1-(.2175))\n\n");
                    printf("   Resultado:\n $18545.25\n");
                    getch();
                    system("cls");
                    break;

                case 2:
                    system("cls");
                    system("color 2F");
                    printf("\n      Reparto Proporcional\n\n");
                    printf("   para salva guardar el estado fisico de la mercancia la\n");
                    printf("   industria SA contrato un seguro pagando como prima \n");
                    printf("   121200 misma que sera cargada al valor de las mercancias.\n\n");
                    printf("   Mercancia   Valor\n");
                    printf("      A       330000  * 0.06 = 19800\n");
                    printf("      B	   450000  * 0.06 = 27000\n");
                    printf("      C	   290000  * 0.06 = 17400\n");
                    printf("      D	   380000  * 0.06 = 22800\n");
                    printf("      E       570000  * 0.06 = 34200\n\n");
                    printf("    Total    2,020,000\n\n");
                    printf("   Factor Constante:\n");
                    printf("   FC= 121200/2020000\n");
                    printf("   FC = 0.06\n\n");
                    printf("   Resultados:\n\n");
                    printf("      A = 19800\n");
                    printf("      B = 27000\n");
                    printf("      C = 17400\n");
                    printf("      D = 22800\n");
                    printf("      E = 34200\n");
                    getch();
                    system("cls");
                    break;

                case 3:
                    system("cls");
                    system("color 4f");
                    printf("\n      Interes Simple\n");
                    /* Ejemplo1 */
                    printf("\n  1. El se%cor Marriques realiza una inversi%cn de inter%cs simple de $27530 a una \n  tasa de 6.5%c semestral durante 9 meses %cDe cu%cnto es su ganancia?\n", 164, 162, 130, 37, 168, 160);
                    getch();
                    /*Primero se colocan los datos correctos*/
                    printf("\n  %c Datos:", 254);
                    printf("\n  %c Capital: $ 27530", 126);
                    getch();
                    printf("\n  %c Tasa: 5%c semestral", 126, 37);
                    getch();
                    printf("\n  %c Tiempo: 9 meses", 126);
                    getch();
                    printf("\n  %c Inter%cs: %c?\n", 126, 130, 168);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n    I=Ctn\n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    I= 27530(.010833)(9)       I= 2684.17\n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   I= $2684.17\n\n", 254);
                    getch();
                    system("cls");

                    /* Ejemplo 2*/
                    printf("\n\n  2. Se realiza un pr%cstamo al 8%c trimestral a pagar en 2 a%cos y medio, si por \n   inter%cs se pagan $28490.60 %cDe cu%cnto es el pr%cstamo?", 130, 37, 164, 130, 168, 160, 130);
                    /*Primero se colocan los datos correctos*/
                    getch();
                    printf("\n\n  %c Datos:", 254);
                    printf("\n  %c Capital: %c?", 126, 168);
                    getch();
                    printf("\n  %c Tasa: 8%c trimestral", 126, 37);
                    getch();
                    printf("\n  %c Tiempo: 2.5 a%cos", 126, 164);
                    getch();
                    printf("\n  %c Inter%cs: $28,549.6\n", 126, 130);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n    C=I/tn\n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    C=28549.6/(0.32)(2.5) o C=28549.6/(0.08)(10)\n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   I= $2684.17\n\n", 254);
                    getch();
                    system("cls");

                    /*Ejemplo 3*/
                    printf("\n  3. Yale de C.O. compra mercanc%ca por $124860 a cr%cdito a pagar en 5 bimestres,   si por r%cditos se cobran 30.775.75 en 5 bimestres %cA qu%c tasa cuatrimestral \n   est%c pactado el cr%cdito?", 161, 130, 130, 168, 130, 160, 130);
                    /*Primero se colocan los datos correctos*/
                    getch();
                    printf("\n\n  %c Datos:", 254);
                    printf("\n  %c Capital: $124860", 126);
                    getch();
                    printf("\n  %c Tasa: %c? cuatrimestral", 126, 168);
                    getch();
                    printf("\n  %c Tiempo: 5 bimestres ", 126);
                    getch();
                    printf("\n  %c Inter%cs: $32775.75\n", 126, 130);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n    t=I/Cn\n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    t=32775.75/(124860)(2.5)\n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   t= 10.5% cuatrimestral\n\n", 254);
                    getch();
                    system("cls");
                    break;

                case 4:
                    system("cls");
                    system("color 5f");
                    printf("\n      Monto Simple\n");
                    /*Ejemplo 1*/
                    printf("\n  1. Se pide un pr%cstamo de 40600 a pagar en 2 a%cos y 5 meses a una tasa del 6.4%c trimestral, %cCu%cnto se pagar%c en total?", 130, 164, 37, 168, 160, 160, 160);
                    /*Primero se colocan los datos correctos*/
                    getch();
                    printf("\n\n  %c Datos:", 254);
                    printf("\n  %c Capital: $40600", 126);
                    getch();
                    printf("\n  %c Tasa: 6.4% trimestral", 126, 37);
                    getch();
                    printf("\n  %c Tiempo: 2 a%cos y 5 meses ", 126, 164);
                    getch();
                    printf("\n  %c Monto: %c?\n", 126, 168);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n    M=C(1+tn)\n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    M=40600(1+0.0233x29)    \n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   M=$65717.866\n\n", 254);
                    getch();
                    system("cls");

                    /*Ejemplo 2*/
                    printf("\n  2. Se desea saber la cantidad que asendera a $8400 en un a%co y un cuatrimestre a una tasa del 5%c bimestral", 164, 37);
                    /*Primero se colocan los datos correctos*/
                    getch();
                    printf("\n\n  %c Datos:", 254);
                    printf("\n  %c Capital: %c?", 126, 168);
                    getch();
                    printf("\n  %c Tasa: 5%c bimestral", 126, 37);
                    getch();
                    printf("\n  %c Tiempo: 1 a%co y 1 cuatrimestre ", 126, 164);
                    getch();
                    printf("\n  %c Monto: 84000\n", 126, 168);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n    C=M/(1+tn)       \n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    MC=84000/(1+0.005x8)           \n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   c=$60000\n\n", 254);
                    getch();
                    system("cls");

                    /*Ejemplo 3*/
                    printf("\n  3. A que tasa de interes anual y trimestral se convertiran $200000 en 221700 durante 4 bimestres y medio");
                    /*Primero se colocan los datos correctos*/
                    getch();
                    printf("\n\n  %c Datos:", 254);
                    printf("\n  %c Capital: 2000000	", 126);
                    getch();
                    printf("\n  %c Tasa: =? anual o trimestral", 126, 37);
                    getch();
                    printf("\n  %c Tiempo: 4.5 Bimestres ", 126, 164);
                    getch();
                    printf("\n  %c Monto: 221700\n", 126, 168);
                    getch();
                    /* Se coloca la f�rmula */
                    printf("\n  %c Formula:\n         t=M/C-1/n              \n", 254);
                    getch();
                    /*Se realiza la sustituci�n*/
                    printf("\n  %c Sustituci%cn: \n    t=221700/200000 -1 /4.5      \n", 254, 162);
                    getch();
                    /*Se coloca el resultado*/
                    printf("\n  %c Resultado: \n   t=2.4111% bimestral *1.5   t=3.61% trimestra*4	t=14.4% anual\n\n", 254);
                    getch();
                    system("cls");
                    break;

                case 5:
                    system("cls");
                    system("color 3F");
                    printf("\n      Descuento Simple\n");
                    printf("\n   Que descuento simple sufrir� un pagare cuyo valor es de 46800\n   y fue liquidado 140 dias antes del");
                    printf("vencimiento con una tasa de\n   2.98 porciento  mensual.\n\n");
                    getch();
                    printf("   V=46800                                \n");
                    printf("   t=2.98                        Ds=V*t*n\n");
                    printf("   n=140 dias                                                 Ds=6508.32\n");
                    printf("   Ds= ?                        Ds=46800*.0298*4.666                  \n\n\n");
                    getch();
                    system("cls");

                    printf("\n   Cual es el valor de un pagare cuyo vencimiento era el 30 de diciembre y\n   fue pagado el 10 de noviembre");
                    printf("por lo que se aplica una tasa de 4.96 si\n   la cantidad que se dedujo fue de 7165\n\n");
                    getch();
                    printf("   Ds=7165\n");
                    printf("   n=50 dias                     V=Ds/t*n \n");
                    printf("   t=4.96                                                     V=260,020.1637\n");
                    printf("   V=?                          V=7165/5.5111*50\n\n\n");
                    getch();
                    system("cls");
                    printf("\n   Que tasa bimestral se aplica a un pagare que fue pagado 23 dias antes y\n   cullo valor es de 63592 teniendo");
                    printf("un descuento de 1085.\n\n");
                    getch();
                    printf("   n=23 dias\n");
                    printf("   Ds=1085                       t=Ds/V*n \n");
                    printf("   V=63592                                                    t=4.45 bimestral \n");
                    printf("   t=?                          t=1085/63592*.38333\n");
                    getch();
                    system("cls");
                    break;

                case 6:
                    system("cls");
                    system("color 8F");
                    printf("      Valor efectivo\n\n");
                    printf("   Se negocia un documento para la adquisicion de un local por 662370\n");
                    printf("   con vencimiento en 1 anio aplicandose una tasa de 29 porciento\n");
                    printf("   anual. Que cantidad se entregara por el documento?\n\n");
                    printf("   Datos:\n");
                    printf("   V = 662370\n\n");
                    printf("   t = .29 anual\n");
                    printf("   n = 1 anio\n");
                    printf("   Ve = ?\n\n");
                    printf("   Formula:\n");
                    printf("   Ve = V(1-tn)\n\n");
                    printf("   Sustitucion:\n");
                    printf("   Ve = 662370(1-(.29)(1))\n\n");
                    printf("   Resultado:\n");
                    printf("   Ve = $470282.7\n");
                    getch();
                    system("cls");
                    break;

                case 7:
                    system("cls");
                    system("color 6F");
                    printf("\n      Factoraje\n\n");
                    printf("   La compania el colibri S.A. de C.V. por requerimiento de liquidez decide\n   liquidar un contrato de factoraje con recursos, siendo su cartera de\n   1, 340,000 firmando por ello un documento a 41 dias, bajo las siguientes\n   condiciones:\n\n");
                    printf("   A)	Comision por manejo administrativo 2 porciento\n");
                    printf("   B)	Anticipo  81 porciento\n");
                    printf("   C)	Tasa 10.77 porciento  trimestral\n\n");
                    printf("   Que cantidad recibira el cliente?\n\n");
                    getch();
                    printf("   IMPORTE DE LA BANCA CEDIDA:                1,340,000\n");
                    printf("   AFORO 19%:                                    254,600\n");
                    printf("   VALOR DEL FINANCIAMIENTO:                  1,085,400\n");
                    printf("   INTERES 10.77% TRIMESTRAL:                 53, 253.342\n");
                    printf("   COMISION 2%:                                  21, 708\n");
                    printf("   I.V.A. 16%:                                   3473.28\n");
                    printf("   IMPORTE QUE RECIBE EL CLIENTE:       1, 006, 965.378\n");
                    getch();
                    system("cls");
                    break;

                case 8:
                    system("cls");
                    printCreeper();
                    printf("\n\n    Regreso al menu Principal...");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                    break;
                }
            } while (OpcionEjemplo != 8);

            printf("Presione una tecla para ir al menu");
            system("cls");
            break;

        case 3:
            //********************************Ejercicios******************************************
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

                switch (OpcionEjercicio)
                {
                case 1:
                    system("cls");
                    system("color 1F");
                    printf("\n  Ejercicios...\n");
                    printf("\n      Porcentaje\n\n");
                    printf("   Se vende una computadora cuyo costo es de $6500 y por haber sufrido una \n");
                    printf("   caida se le pierde el 15 porciento de su valor. Que cantidad\n");
                    printf("   perdio?.\n\n");
                    getch();
                    system("cls");
                    printf("\n  Ejercicios...\n");
                    printf("\n      Monto\n\n");
                    printf("   Se venden sillas para comedor en $5432 teniendo una utilidad del 15.35 \n");
                    printf("   porciento. Cual es el precio de costo?.\n\n");
                    getch();
                    system("cls");
                    printf("\n  Ejercicios...\n\n");
                    printf("      Diferencia\n\n");
                    printf("   Se vende Cama siendo su costo de $16345 y por el uso\n");
                    printf("   se le pierde el 10.49 porciento. En cuanto se vendio?\n\n");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 2:
                    system("cls");
                    system("color 2F");
                    printf("\n  Ejercicios...\n\n");
                    printf("      Reparto Proporcional\n\n");
                    printf("   para salva guardar el estado fisico de la mercancia la\n");
                    printf("   industria SA contrato un seguro pagando como prima \n");
                    printf("   520153 misma que sera cargada al valor de las mercancias.\n\n");
                    printf("   Mercancia   Valor\n\n");
                    printf("      F    190000\n");
                    printf("      G	   330000\n");
                    printf("      H	   870000\n");
                    printf("      I	   990000\n");
                    printf("      J    240000\n\n");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 3:
                    system("cls");
                    system("color 4f");
                    printf("\n  Ejercicios...\n\n");
                    printf("\n     Interes Simple\n\n");
                    printf("\n  1. Games y Asociados piden un pr%cstamo a pagar en 5 cuatrimestres, a una \n    tasa de 8.9%c trimestral. Si por intereses se pagan $29850 %cDe cu%cnto fue el \n    pr%cstamo?\n\n", 130, 37, 168, 160, 130);
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 4:
                    system("cls");
                    system("color 5f");
                    printf("\n  Ejercicios...\n\n");
                    printf("\n     Monto Simple\n\n");
                    printf("\n  1. En cuantos a�os meses y d�as $344500 tardaran en convertirse en 2300200 a\n   una tasa del .49% semanal");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 5:
                    system("cls");
                    system("color 3F");
                    printf("\n  Ejercicios...\n\n");
                    printf("\n     Descuento Simple\n\n");
                    printf("Se descuenta un documento con valor de 342500 antes de su vencimiento a una tasa de 5.4 semestral si el\n");
                    printf("descuento fue de 5879 cuantos meses y dias faltaban\n");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 6:
                    system("cls");
                    system("color 8F");
                    printf("\n  Ejercicios...\n\n");
                    printf("\n     Valor Efectivo\n\n");
                    printf("   Se negocia un documento para la adquisicion de un local por 226544\n");
                    printf("   con vencimiento en 3 anio aplicandose una tasa de 53 porciento\n");
                    printf("   anual. Que cantidad se entregara por el documento?\n\n");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;

                case 7:
                    system("cls");
                    system("color 6F");
                    printf("\n  Ejercicios...\n\n");
                    printf("\n      Factoraje\n\n");
                    printf("   La compania el gato saltarin S.A. de C.V. por requerimiento de liquidez decide\n   liquidar un contrato de factoraje con recursos, siendo su cartera de\n   3,544,900 firmando por ello un documento a 53 dias, bajo las siguientes\n   condiciones:\n\n");
                    printf("   A)	Comision por manejo administrativo 5 porciento\n");
                    printf("   B)	Anticipo  59 porciento\n");
                    printf("   C)	Tasa 9.49 porciento  semestral\n\n");
                    printf("   Que cantidad recibira el cliente?\n\n");
                    printf("\n\n    Presione una tecla para ir al menu");
                    getch();
                    break;
                case 8:
                    system("cls");
                    printCreeper();
                    printf("\n\n    Regreso al menu Principal...");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                    break;
                }
            } while (OpcionEjercicio != 8);
            printf("Presione una tecla para ir al menu");
            getch();
            system("cls");
            break;

        //********************************Conversor******************************************
        case 4:
            system("cls");
            printf("\n                                                                   %d/%d/%d\n", fecha->tm_mday, fecha->tm_mon + 1, fecha->tm_year + 1900);
            do
            {
                system("cls");
                printf("\n     Conversor de Tiempo(n)\n");
                printf("\n  -------------------------------------------------------------------\n\n");
                printf("  Que tiempo desea convertir:\n\n");
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

                switch (opcion1)
                {
                case 1:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. semestres\n");
                    printf("  2. cuatrimestres\n");
                    printf("  3. trimestres\n");
                    printf("  4. bimestres\n");
                    printf("  5. meses\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 2;
                        printf("\n\n    El tiempo de a%cos a semestres es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 3;
                        printf("\n\n    El tiempo de a%cos a cuatrimestres es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 4;
                        printf("\n\n    El tiempo de a%cos a trimestres es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 6;
                        printf("\n\n    El tiempo de a%cos a bimestres es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 12;
                        printf("\n\n    El tiempo de a%cos a meses es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 24;
                        printf("\n\n    El tiempo de a%cos a quincenas es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 52;
                        printf("\n\n    El tiempo de a%cos a semanas es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de a%cos\n", 164);
                        printf("\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de a%cos: ", 164);
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 * 360;
                        printf("\n\n    El tiempo de a%cos a dias es: %.4f", 164, tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 2:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. cuatrimestres\n");
                    printf("  3. trimestres\n");
                    printf("  4. bimestres\n");
                    printf("  5. meses\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 2;
                        printf("\n\n    El tiempo de semestres a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) / 4);
                        printf("\n\n    El tiempo de semestres a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) / 3);
                        printf("\n\n    El tiempo de semestres a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) / 2);
                        printf("\n\n    El tiempo de semestres a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 6);
                        printf("\n\n    El tiempo de semestres a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) * 2);
                        printf("\n\n    El tiempo de semestres a quincenas es: %.4f", tiempo2);
                        getch();

                    case 7:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) * 4);
                        printf("\n\n    El tiempo de semestres a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de semestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 6) * 30);
                        printf("\n\n    El tiempo de semestres a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 3:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. trimestres\n");
                    printf("  4. bimestres\n");
                    printf("  5. meses\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 3;
                        printf("\n\n    El tiempo de cuatrimestres a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) / 6);
                        printf("\n\n    El tiempo de cuatrimestres a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) / 3);
                        printf("\n\n    El tiempo de cuatrimestres a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) / 2);
                        printf("\n\n    El tiempo de cuatrimestres a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 4);
                        printf("\n\n    El tiempo de cuatrimestres a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) * 2);
                        printf("\n\n    El tiempo de cuatrimestres a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) * 4);
                        printf("\n\n    El tiempo de cuatrimestres a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de cuatrimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de cuatrimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = ((tiempo1 * 4) * 30);
                        printf("\n\n    El tiempo de cuatrimestres a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4 .bimestres\n");
                    printf("  5. meses\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 4;
                        printf("\n\n    El tiempo de trimestres a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) / 6;
                        printf("\n\n    El tiempo de trimestres a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) / 4;
                        printf("\n\n    El tiempo de trimestres a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) / 2;
                        printf("\n\n    El tiempo de trimestres a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3);
                        printf("\n\n    El tiempo de trimestres a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) * 2;
                        printf("\n\n    El tiempo de trimestres a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) * 4;
                        printf("\n\n    El tiempo de trimestres a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de trimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de trimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 3) * 30;
                        printf("\n\n    El tiempo de trimestres a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4. trimestres\n");
                    printf("  5. meses\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 6;
                        printf("\n\n    El tiempo de bimestres a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) / 6;
                        printf("\n\n    El tiempo de bimestres a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) / 4;
                        printf("\n\n    El tiempo de bimestres a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) / 3;
                        printf("\n\n    El tiempo de bimestres a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2);
                        printf("\n\n    El tiempo de bimestres a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) * 2;
                        printf("\n\n    El tiempo de bimestres a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) * 4;
                        printf("\n\n    El tiempo de bimestres a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de bimestres");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de bimestres: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 * 2) * 30;
                        printf("\n\n    El tiempo de bimestres a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4. trimestres\n");
                    printf("  5. bimestres\n");
                    printf("  6. quincenas\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 12;
                        printf("\n\n    El tiempo de meses a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1) / 6;
                        printf("\n\n    El tiempo de meses a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1) / 4;
                        printf("\n\n    El tiempo de meses a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1) / 3;
                        printf("\n\n    El tiempo de meses a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1) / 2;
                        printf("\n\n    El tiempo de meses a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1)*2;
                        printf("\n\n    El tiempo de meses a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1)*4;
                        printf("\n\n    El tiempo de meses a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de meses");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de meses: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1)*30;
                        printf("\n\n    El tiempo de meses a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4. trimestres\n");
                    printf("  5. bimestres\n");
                    printf("  6. meses\n");
                    printf("  7. semanas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 24;
                        printf("\n\n    El tiempo de quincenas a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) / 6;
                        printf("\n\n    El tiempo de quincenas a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) / 4;
                        printf("\n\n    El tiempo de quincenas a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) / 3;
                        printf("\n\n    El tiempo de quincenas a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) / 2;
                        printf("\n\n    El tiempo de quincenas a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2);
                        printf("\n\n    El tiempo de quincenas a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) * 4;
                        printf("\n\n    El tiempo de quincenas a semanas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de quincenas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de quincenas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 2) * 30;
                        printf("\n\n    El tiempo de quincenas a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 8:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4. trimestres\n");
                    printf("  5. bimestres\n");
                    printf("  6. meses\n");
                    printf("  7. quincenas\n");
                    printf("  8. dias\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 52;
                        printf("\n\n    El tiempo de semanas a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) / 6;
                        printf("\n\n    El tiempo de semanas a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) / 4;
                        printf("\n\n    El tiempo de semanas a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) / 3;
                        printf("\n\n    El tiempo de semanas a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) / 2;
                        printf("\n\n    El tiempo de semanas a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4);
                        printf("\n\n    El tiempo de semanas a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) * 2;
                        printf("\n\n    El tiempo de semanas a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de semanas");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de semanas: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 4) * 30;
                        printf("\n\n    El tiempo de semanas a dias es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 9:
                    system("cls");
                    printf("\n  Tiempo que desea convertir: \n\n");
                    printf("  -------------------------------------------------------------------\n");
                    printf("  1. a%cos\n", 164);
                    printf("  2. semestres\n");
                    printf("  3. cuatrimestres\n");
                    printf("  4. trimestres\n");
                    printf("  5. bimestres\n");
                    printf("  6. meses\n");
                    printf("  7. quincenas\n");
                    printf("  8. semanas\n");

                    printf("\n  Seleccione una opcion: ");
                    scanf("%i", &opcion2);

                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = tiempo1 / 360;
                        printf("\n\n    El tiempo de dias a a%cos es: %.4f", 164, tiempo2);
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) / 6;
                        printf("\n\n    El tiempo de dias a semestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 3:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) / 4;
                        printf("\n\n    El tiempo de dias a cuatrimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 4:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) / 3;
                        printf("\n\n    El tiempo de dias a trimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 5:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) / 2;
                        printf("\n\n    El tiempo de dias a bimestres es: %.4f", tiempo2);
                        getch();
                        break;

                    case 6:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30);
                        printf("\n\n    El tiempo de dias a meses es: %.4f", tiempo2);
                        getch();
                        break;

                    case 7:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) * 2;
                        printf("\n\n    El tiempo de dias a quincenas es: %.4f", tiempo2);
                        getch();
                        break;

                    case 8:
                        system("cls");
                        printf("\n  Conversor de dias");
                        printf("\n\n  -------------------------------------------------------------------\n");
                        printf("\n    Digite el numero de dias: ");
                        scanf("%f", &tiempo1);
                        tiempo2 = (tiempo1 / 30) * 4;
                        printf("\n\n    El tiempo de dias a semanas es: %.4f", tiempo2);
                        getch();
                        break;
                    }
                    break;

                case 10:
                    system("cls");
                    printCreeper();
                    printf("\n\n    Regreso al menu principal");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\n    Opcion Incorrecta.");
                    getch();
                    break;
                }

            } while (opcion1 != 10);

            system("cls");
            break;

        case 5:
            //********************************Salir******************************************
            system("cls");
            printf("\n\n    Presione una tecla para salir");
            getch();
            system("cls");
            break;

        default:
            system("cls");
            printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu");
            getch();
            system("cls");
            break;
        }

    } while (OpcionMenu != 5);

    system("cls");
    printCreeper();
    printf("\n\n    Gracias por usar nuestra aplicacion.\n\n");
    system("pause");
    printf("\n\n\n\n\n");

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
}

void realizarOperacion()
{
    int resultadoOperacion1 = operacion1();
    int resultadoOperacion2 = operacion2(resultadoOperacion1);
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

    for (int i = 0; i < 9; ++i)
    {
        if (i + 1 == opcion2)
        {
            continue;
        }

        printf("%i. %s \n", i + 1, arregloTiempo[i]);

        if (i + 1 == 8)
        {
            printf("%i. Salir", i + 2);
        }
    }

    printf("\n  Seleccione una opcion: ");
    scanf("%i", &opcion2);
    return opcion2;

    // printf("  1. a%cos\n", 164);
    // printf("  2. semestres\n");
    // printf("  3. cuatrimestres\n");
    // printf("  4. trimestres\n");
    // printf("  5. bimestres\n");
    // printf("  6. meses\n");
    // printf("  7. quincenas\n");
    // printf("  8. semanas\n");
    // printf("  9. dias\n");
    // printf("  10. Salir\n");
}