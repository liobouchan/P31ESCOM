#ifndef EJEMPLO9_H
#define EJEMPLO9_H
/*ERRORES*/
#define E_IGUALES    -1
/*MACROS*/
#define MAX(a,b)    ((a)>(b)?(a):(b))
#define IGUAL(a,b,c,d,e) ((a)==(b)||(a)==(c)||(a)==(d)||(a)==(e)||(b)==(c)||(b)==(d)||(b)==(e)||(c)==(d)||(c)==(e)||(d)==(e))

int mayor4(int a, int b, int c, int d, int e);

#endif