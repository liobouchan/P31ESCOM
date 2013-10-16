#include "sueldo.h"

float sueldo(int horas, float pagohora){

  int h_norm;  //Horas de jornada normal
  int h_ext;   //Horas extras
  int h_exte;  //Horas extras extendidas
  float total; //Pago total

  if(!ENTRE(horas,0,H_MAX))
    return E_MAX_HOR;

  if(!(pagohora>=0))
    return E_SAL_NEG;

  total=0;

  if(horas>H_SEMA)
    //Trabajo Horas Extras
    if(horas>H_SEMAE)
      //Horas extras especiales
      total = H_SEMA*pagohora+
              H_EXT1*pagohora*I_EXT+
              (horas-H_SEMAE)*pagohora*I_EXT1;
    else
      //Solo horas extras
      total = H_SEMA*pagohora+
              (horas-H_SEMA)*pagohora*I_EXT;
  else
    //No tiene Horas Extras
  total = horas*pagohora;

  return total;
}
