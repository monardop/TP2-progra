#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int dia, mes, year;
}tFecha;
const int diasBisiesto[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
const int diasNoBisiesto[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

tFecha crearFecha();
int validarFecha(tFecha fecha);
int determinarBisiesto(const unsigned int year);
void diaSemana();

int main(){

    return 0;
}

tFecha crearFecha() {
    tFecha fecha;
    int fechaValida;
    do {
        printf("Insertar una fecha de formato dd/mm/aaaa: ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.year);
        fechaValida = validarFecha(fecha);
    }while(fechaValida == 1);
    return fecha;
}
int determinarBisiesto(const unsigned int year) {
    return (year %4 == 0 && (year %100 == 0 || year %400 == 0))?0:1;
}
int validarFecha(tFecha fecha) {

}

void diaSemana() {
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