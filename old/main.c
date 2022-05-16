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
            //********************************Temas******************************************

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

                switch (OpcionTema)
                {
                case 1:
                    system("cls");
                    system("color  1F");
                    printf("\n  +Porcentaje\n\n\n");
                    getch();
                    printf("   -Porcentaje\n\n");
                    printf("   Un porcentaje es la parte proporcional expresada en tanto porciento de\n   una cantidad llamada base, el porcentaje y la base siempre deben ser de\n   la misma especie.\n");
                    printf("\n   1.- Base: Es la cantidad sobre la cual se calcula el porcentaje.\n\n   2.- Tanto porciento: Es el n�mero de veces que se toma un c�ntimo\n   de la base.\n\n   3.- Tanto por uno: Es la cent�sima parte del tanto porciento y el que\n   se emplea     en las operaciones.");
                    printf("\n   La formula es: \n");
                    printf("\n   P=Bt\n");
                    printf("\n   Donde: P = Porcentaje");
                    printf("\n          B = Base");
                    printf("\n          t = Tanto porciento\n\n");
                    getch();
                    printf("\n   -Monto\n");
                    printf("\n   Es la suma de la base mas el porcentaje.");
                    printf("\n   La formula es:\n");
                    printf("\n   M=B(1+t)\n");
                    printf("\n   Donde: M = Monto");
                    printf("\n          B = Base");
                    printf("\n          t = Tanto porciento\n\n");
                    getch();
                    printf("\n   -Diferencia\n");
                    printf("\n   La diferencia es el resultado que se obtiene de restar la base del\n   porcentaje.");
                    printf("\n   La formula es:\n");
                    printf("\n   D=B(1-t)\n");
                    printf("\n   Donde: D = Diferencia");
                    printf("\n          B = Base");
                    printf("\n          t = Tanto porciento");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 2:
                    system("cls");
                    system("color 2F");
                    printf("\n   +Reparto Proporcional\n\n");
                    printf("   Es la operacion que tiene por objetivo distribuir una cantidad en\n");
                    printf("   proporcion directa o inversa a ciertos numeros dados, o a los\n");
                    printf("   productos de varios numeros propuestos.\n\n");
                    printf("   Se puede representar asi:\n\n");
                    printf("      1. Reparto proporcional directo simple.\n");
                    printf("      2. Reparto proporcional inverso simple.\n");
                    printf("      3. Reparto proporcional directo compuesto.\n");
                    printf("      4. Reparto proporcional inverso compuesto.\n");
                    printf("      5. Reparto proporcional mixto.\n\n");
                    printf("   En la materia de Calculos financieros I solo se ve el reparto\n");
                    printf("   proporcional directo simple.\n\n");
                    printf("   -Reparto proporcional directo simple.\n\n");
                    printf("   Se considera directo cuando el numero de indice mayor o reparto\n");
                    printf("   le corresponde mas y al indice menor le corresponde menos.\n");
                    printf("   Es simple cuando solo existe una serie de datos para efectuar.\n");
                    printf("   La resolucion de este tipo de casos se efectuan por medio del \n");
                    printf("   metodo de factor constante, que consiste en dividir la cantidad\n");
                    printf("   a repartir entre la suma de los datos, a el cociente representa\n");
                    printf("   el factor constante y dicho factor se multiplica por cada uno\n");
                    printf("   de los numeros dados.");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 3:
                    system("cls");
                    system("color 9F");
                    printf("\n                    HOJA DE PRORRATEO EN MONEDA NACIONAL                              ");
                    printf("\n\n   Es la operacion que tiene por objeto determinar atraves de un reparto\n   proporcional, el gasto de una factura conciendo el precio de compra y\n   los gastos relacionados por la misma.");
                    printf("\n\n   ELEMETOS:");
                    getch();
                    printf("\n\n    PRECIO DE COMPRA:\n    Se concidera haci al precio de adquisicion de las mercancias.");
                    getch();
                    printf("\n\n    PRECIO DE COSTO:\n    Es el precio de compra mas los gastos ocacionados por la misma.");
                    getch();
                    printf("\n\n    GASTOS:\n    Se le llaman a todas las erogaciones causadas por la compra\n    (salidas de dinero).");
                    getch();
                    printf("\n\n    GASTOS AL PESO:\n    Son todos aquellos ocacionados por el movimiento, y/o peso de la\n    mercancia, como los empaques, acarreos,fletes,maniobra en puertos\n    enbarques y desenbarques, enbalajes, almacenaje,etc.");
                    getch();
                    printf("\n\n    GASTOS AL VALOR:\n    Son toos aquellos que no dependen del movimiento y peso de la\n    mercancia, como documentacion, seguros, comiciones, derechos de\n    guarda y justodia, telefonemas, etc.");
                    getch();
                    printf("\n\n    Para efectuar un adecuado prorrateo de gastos es necesario distinguir\n    entre los pesos de la mercancia:");
                    printf("\n\n    PESO BRUTO:\n    Es el peso de la mercancia con todas sus embulturas.");
                    printf("\n\n    PESO NETO:\n    Es el peso de la mercacia despojada de todos sus empaques.");
                    printf("\n\n    TARA:\n    Se llama asi al peso del empaque.");
                    getch();
                    printf("\n\n\n                    HOJA DE PRORRATEO EN MONEDA EXTRANJERA                            ");
                    printf("\n\n    1.- TIPO DE CAMBIO:\n        Es la convercion de peso M�xicano de monadedas extranjeras.");
                    printf("\n\n    2.- MONEDA EXTRANJERA:\n        Dinero en uso de otros paises.");
                    printf("\n\n    3.- DERECHOS ADUANALES:\n        Son los impuestos que se cobran por la exportacion o importacion\n        de mercancia en otros paises.");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 4:
                    system("cls");
                    system("color 4f");
                    printf("\n                             %c Inter%cs Simple %c", 175, 130, 174);
                    getch();
                    printf("\n\n  Renta que se paga por el uso de un capital prestado y se calcula seg%cn un \n  tanto por ciento en un tiempo determinado, por lo consiguiente, la tasa \n  puede ser anual, semestral, cuatrimestral, trimestral, bimestral, mensual, \n  quincenal, semanal o diaria.\n", 163);
                    printf("\n    %c Elementos", 248);
                    printf("\n  - Capital (C: Cantidad que se impone a determinada tasa y por ciento tiempos).");
                    printf("\n  - Inter%cs (I: Es la renta que se paga por el uso del capital).", 130);
                    printf("\n  - Tiempo (n: N%cmero de a�os, meses, d%cas, etc, que dura la imposici%cn de \n    capital).", 163, 161, 162);
                    printf("\n  - Tasa (t: Inter�s expresado en tanto por ciento).");
                    printf("\n  - Monto (M: Suma del capital m�s los intereses).\n");
                    printf("\n  En los ejercicios de inter%cs simple o financieros, generalmente se utiliza el \n  a%co comercial, es decir, el de 360 d%cas, el a%co natural es de 365 d%cas.\n", 130, 164, 161, 164, 161);
                    printf("\n                                 %c F%crmulas\n", 248, 162);
                    printf("\n                        I=Ctn       C=I/tn       t= I/Cn\n\n");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 5:
                    system("cls");
                    system("color 5f");
                    printf("\n                             %c Monto Simple %c\n", 175, 174);
                    getch();
                    printf("\n  Es la suma del capital m%cs los intereses, es el valor futuro y siempre es \n  mayor que el capital.", 160);
                    getch();
                    printf("\n\n  Inter%cs: Ganancia, r%cditos o inter%cs", 130, 130, 130);
                    getch();
                    printf("\n\n  Monto: Valor futuro");
                    getch();
                    printf("\n                               %c F%crmulas\n", 248, 162);
                    printf("\n              M=C(1+tn)   C=M/(I+tn)   T=M/C-1 /n    n=M/C-1/t");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 6:
                    system("cls");
                    system("color 3F");
                    printf("\n   Descuento simple\n\n");
                    getch();
                    printf("   Cantidad o valor que se deduce de otro y se consigna de un\n");
                    printf("   documento o titulo de credito por anticipacion anticipada a su \n");
                    printf("   fecha de vencimiento.\n\n");
                    getch();
                    printf("   El valor inscrito a un documento se le conoce como valor \n");
                    printf("   nominal y representa el capital prestado mas intereses.\n\n");
                    getch();
                    printf("   En el documento debe anotarse la fecha de vencimiento, es\n");
                    printf("   decir, el dia que debe ser liquidado, si se paga antes de esa\n");
                    printf("   fecha su valor disminuye. \n\n");
                    getch();
                    printf("   En la actualidad la operaciones a credito se garantizan atraves\n");
                    printf("   de documentos y a falta de recursos se acude a instituciones\n");
                    printf("   bancarias mediante endoso de documentos a cambio de dinero en \n");
                    printf("   efectivo el cual es menor al valor nominal pues tendra que \n");
                    printf("   esperar ala fecha de vencimiento para cobrarlo a esto se le\n");
                    printf("   conoce como valor real o actual.\n\n");
                    getch();
                    printf("   Los elementos que intervienen en el descuento simple son:\n\n");
                    printf("   1. Valor nominal (V) valor o cantidad que se inscribe en el\n");
                    printf("      cuerpo del documento de credito y que lleva los intereses\n");
                    printf("      acordados. \n\n");
                    getch();
                    printf("   2. Descuento simple (Ds) cantidad que se deduce del valor \n");
                    printf("      nominal en funcion ala tasa y el tiempo determinado. \n\n");
                    getch();
                    printf("   3. Valor efectivo real o actual (Ve) resultado que se obtiene\n");
                    printf("      de restar del valor nominal, descuento simple y gastos de\n");
                    printf("      negociacion.\n\n");
                    getch();
                    printf("   4. Documento de credito: titulo de credito por medio del cual\n");
                    printf("      una persona se compromete a pagar cierta cantidad\n");
                    printf("      de dinero a una fecha determinada. \n\n");
                    getch();
                    printf("   Las operaciones de interes simple y descuento simple son muy \n");
                    printf("   similares exceptuando que el interes es una utilidad y el \n");
                    printf("   descuento una perdida. \n\n.");
                    getch();
                    printf("   Formulas:\n");
                    getch();
                    printf("   Descuento simple \n");
                    printf("   Ds: Descuento simple\n");
                    printf("   V: Valor nominal \n");
                    printf("   T: Tasa\n");
                    printf("   N: Tiempo \n\n");
                    getch();
                    printf("   Ds=V*T*N	V=Ds/T*N	T=Ds/V*N	N=Ds/T*V\n");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 7:
                    system("cls");
                    system("color 8F");
                    printf("\n   Valor efectivo \n\n");
                    printf("   Es el resultado que se obtiene de restar el valor nominal,\n");
                    printf("   descuento simple y gastos de negociacion si los hubiere. \n\n");
                    printf("   Formulas:\n\n");
                    printf("    Ve: Valor efectivo \n");
                    printf("    V: Valor nominal \n");
                    printf("    T: Tasa\n");
                    printf("    N: Tiempo \n\n");
                    printf("   V=Ve/(1-T*N)	Ve=V(1-T*N)		T=(1-Ve/V)/N	N=(1-Ve/V)/T");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 8:
                    system("cls");
                    system("color 6F");
                    printf("\n   FACTORAJE:\n\n");
                    getch();
                    printf("   Es una herramienta financiera que permite a una empresa, contar con\n");
                    printf("   liquides inmediata a traves de una sesion  de derechos de las cuentas \n");
                    printf("   por cobrar en su activo a otra empresa llamada: factor mediante mas \n");
                    printf("   comision.\n\n");
                    getch();
                    printf("   El factoraje consiste en la compra de derechos crediticios y la \n");
                    printf("   prestacion de servicios comentarios, la empresa liquida va activo y\n");
                    printf("   convierte sus cuentas por cobrar en efectivo.\n\n");
                    getch();
                    printf("   Los elementos que intervienen son:\n\n");
                    getch();
                    printf("   Cliente: persona fisica o moral que cede sus derechos de cobro sobre\n");
                    printf("   documentos a favor.\n\n");
                    getch();
                    printf("   Factor: persona moral que adquiere dichos derechos mediante el cobro de\n");
                    printf("   una comision.\n\n");
                    getch();
                    printf("   Deudor: persona que extiende dichos documentos para cobro posterior como\n");
                    printf("   pago o por el uso de servicios.\n\n");
                    getch();
                    printf("   Los servicios prestados por el factor son:\n\n");
                    getch();
                    printf("   1) Analisis de riesgos y creditos comerciales.\n");
                    printf("   2) Otorgamiento de anticipos a cuenta de cobros.\n");
                    printf("   3) Cobertura de riesgos de insolvencia \n");
                    printf("   4) pagos anticipados a proveedores.\n\n");
                    getch();
                    printf("   TIPOS DE FACTORAJE:\n\n");
                    getch();
                    printf("   1: factoraje con recursos\n\n");
                    getch();
                    printf("   Donde el cliente se obliga solidariamente con el deudor ante la empresa \n");
                    printf("   de factoraje por el pago en la fecha de vencimiento de los derechos \n");
                    printf("   cedidos.\n\n");
                    getch();
                    printf("   2: factoraje sin recursos\n\n");
                    getch();
                    printf("   Donde el cliente no esta obligado a responder por el pago de los \n");
                    printf("   derechos de credito cedidos al factor.\n\n");
                    getch();
                    printf("   FACTORAJE CON RECURSOS:\n\n");
                    getch();
                    printf("   Presenta las siguientes modalidades:\n\n");
                    printf("   A)	Compra a valor presente\n");
                    printf("   B)	Compra con anticipo a cuenta del pago acordado\n");
                    printf("   C)	Intereses anticipados sin cobro de honorarios\n");
                    printf("   D)	Factoraje sin notificacion  con fianza de cumplimiento y de\n");
                    printf("        credito\n");
                    printf("   E)	Factoraje a largo plazo\n");
                    printf("   F)	Con mandato de cobranza\n\n");
                    getch();
                    printf("   Al vencimiento puede ocurrir:\n\n");
                    getch();
                    printf("   1: Que el deudor pague al factor librando al cliente de su responsabilidad.\n");
                    printf("   2: Que el deudor no pague en cuyo caso el cliente puede cubrir el total de\n");
                    printf("   la venta o renegociar la cartera.\n\n");
                    getch();
                    printf("   FACTORAJE SIN RECURSOS:\n\n");
                    getch();
                    printf("   Es cuando se hace la venta de documentos, sin existir ningun compromiso del\n");
                    printf("   cliente hacia el factor, por lo que las tasas aplicadas son superiores a\n");
                    printf("   las del factoraje con recursos y se efectua a travez de un endoso en \n");
                    printf("   propiedad.\n\n");
                    printf("   Las modalidades son:\n\n");
                    getch();
                    printf("   1)	Con pago anticipado: el cliente recibe un anticipo por parte del factor\n");
                    printf("   y la diferencia en la fecha de vencimiento, aun cuando el deudor, no haya \n");
                    printf("   liquidado la cuenta por cobrar.\n\n");
                    printf("   2)	Con pago al vencimiento: el factor asume el riesgo completo de \n");
                    printf("   incobrabilidad y el cliente recibe su pago, independientemente de que\n");
                    printf("   el deudor realice o no el suyo en ambos casos sera notificado el \n");
                    printf("   deudor por parte del factor que es legitimo propietario de las cuentas\n");
                    printf("   por cobrar.\n\n");
                    getch();
                    printf("   Ya sea a credito o a la venta de las cuentas por cobrar se calcula sobre el\n");
                    printf("   valor nominal, y va de un 70 porciento a un 90 porciento, la diferencia \n");
                    printf("   de un 30 porciento a un 10 porciento recibe el nombre de aforo o reserva\n");
                    printf("   de garantia y sera entregado al sedente cuando los\n");
                    printf("   deudores hayan liquidado los creditos al factor.\n\n");
                    getch();
                    printf("\n\n\n   Presiona una tecla para ir al menu...");
                    getch();
                    break;

                case 9:
                    system("cls");
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
                    printf("\n\n    Regreso al menu Principal...");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\n    Selecciono una opcion incorrecta. Presione una tecla para ir al menu...");
                    getch();
                    break;
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
    printf("\n\n    Gracias por usar nuestra aplicacion.\n\n");
    system("pause");
    printf("\n\n\n\n\n");

    return 0;
}
