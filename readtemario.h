#ifndef READTEMARIO_DOT_H
#define READTEMARIO_DOT_H

void imprimirarchivo(char nombreArchivo[]);
extern void readtemario(int temaId);
extern void readejercicio(int temaId);
extern void readejemplo(int temaId);

extern float convertiranios(int cantidadAnios, int tiempoConvertirId);
extern float convertirsemestres(int cantidadSemestres, int tiempoConvertirId);
extern float convertircuatrimeses(int cantidadCuatrimeses, int tiempoConvertirId);
extern float convertirtrimestres(int cantidadTrimestres, int tiempoConvertirId);
extern float convertirbimestres(int cantidadBimestres, int tiempoConvertirId);
extern float convertirmeses(int cantidadMeses, int tiempoConvertirId);
extern float convertirquincenas(int cantidadQuincenas, int tiempoConvertirId);
extern float convertirsemanas(int cantidadSemanas, int tiempoConvertirId);
extern float convertirdias(int cantidadDias, int tiempoConvertirId);

#endif