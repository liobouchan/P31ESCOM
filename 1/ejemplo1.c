#include "ejemplo.h"

float sueldo (int horas, float pagohora){
  int h_nor;
  int h_ext;
  int h_exte;
  float total;
  if(!ENTRE(horas,0,H_MAX))
    return E_MAX_HOR;
  if(!(pagohora>=0))
    return E_SAL_NEG;
	total = 0;
	if(horas>H_SEMA)
      if (horas>H_SEMAE)
	    total = H_SEMA*pagohora+ H_EXTR1*pagohora+I_EXT+(horas-H_SEMAE)+pagohora+I_EXT1;
	  else
	    total = H_SEMA*pagohora+ (horas-H_SEMA)*pagohora+I_EXT;
    else
      total = horas*pagohora;
	
  return total;
}