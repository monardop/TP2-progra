#include <stdlib.h>



void diaSemana () {
    const int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    tFecha fecha;
    int diaFinal;

    do
    {
        printf("Ingresar una fecha posterior al 1752.\n");
        fecha = crearFecha();
    } while (fecha.year < 1752);

    diaFinal = (fecha.year + fecha.year/4 + fecha.year/400 - fecha.year/100 + t[fecha.mes -1] + fecha.dia) % 7;
    switch (diaFinal)
    {
    case 0:
        printf("El %02d/%02d%d fue domingo",fecha.dia,fecha.mes,fecha.year);
        break;
    case 1:
        printf("El %02d/%02d%d fue lunes",fecha.dia,fecha.mes,fecha.year);
        break;
    case 2:
        printf("El %02d/%02d%d fue martes",fecha.dia,fecha.mes,fecha.year);
        break;
    case 3:
        printf("El %02d/%02d%d fue miercoles",fecha.dia,fecha.mes,fecha.year);
        break;
    case 4:
        printf("El %02d/%02d%d fue jueves",fecha.dia,fecha.mes,fecha.year);
        break;
    case 5:
        printf("El %02d/%02d%d fue viernes",fecha.dia,fecha.mes,fecha.year);
        break;
    case 6:
        printf("El %02d/%02d%d fue sabado",fecha.dia,fecha.mes,fecha.year);
        break;
    }
}