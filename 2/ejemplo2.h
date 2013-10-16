#ifndef EJEMPLO2_H
#define EJEMPLO2_H
#define D_EMMJLAOD    31
#define D_FEBN        28
#define D_FEBB        29
#define D_ABJNSN      30  

#define E_MES_IN      -1
#define E_A_IN        -2

#define BISIESTO(x)    ((x)%4)
#define ENTRE(x,a,b)   ((x)>(a) && (x)<=(b))

int dias_mes(int anio, int mes);

#endif