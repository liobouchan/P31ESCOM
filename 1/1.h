#ifndef SUELDO_H
#define SUELDO_H

//Constantes de Horas

#define H_SEMANA  40    //Semana Laboral
#define H_EXT1    5     //Primeras horas extras
#define H_SEMAE   (H_SEMANA + H_EXT1)    //Limite inferior de segundo grupo
#define H_MAX     60    //Número máximo de horas extras
#define I_EXT     1.5   //50% adicional, primeras grupo
#define I_EXT1    1.65  //65% adicional, segundas grupo

//Constantes de error

#define E_MAX_HOR  -1   //Numero de horas invalido
#define E_SAL_NEG  -2   //Salario negativo

//Macros requeridas 

#define ENTRE(x,a,b)    ((a)>=(x) && (x)<=(b))

/*
Parametros

  horas     Numero de horas laboradas
  pagohora  Pago por hora al empleado

Regresa

  El sueldo en caso de ser mayor que cero y codigo de error
  en caso de ser negativo
*/

float sueldo(int horas, float pahohora);
#endif
