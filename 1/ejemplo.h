#ifndef EJEMPLO1_H
#define EJEMPLO1_H
  /*CONSTANTES HORAS*/
#define H_SEMA     40
#define H_EXTR1    5
#define H_SEMAE    (H_SEMA+H_EXTR1)
#define H_MAX      60
#define I_EXT      1.5
#define I_EXT1     1.65
  /*CONSTANTES ERROR*/
#define E_MAX_HOR    -1
#define E_SAL_NEG    -2
  /*MACROS*/
#define ENTRE(x,a,b)    ((a)<=(x) && (x)<=(b))

float sueldo(int horas, float pagohora);
#endif