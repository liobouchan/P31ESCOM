#ifndef EJEMPLO3_H
#define EJEMPLO3_H
/*CONSTANTES*/
#define PRIEDAD     10 
#define SEGEDAD     20
#define TEREDAD     25
#define LIMITE1     5
#define LIMITE2     10
/*ERRORES*/
#define E_ED_IN     -1
/*MACROS*/
#define ENTRE1(x,a,b)    ((x)>=(a) && (x)<=(b))
#define ENTRE2(x,a,b)    ((x)>(a)&&(x)<(b))
int costo_b(int edad);
#endif