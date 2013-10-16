#include "ejemplo3.h"
int costo_b(int edad){
  int costo;
  if(!(edad>=0))
    return E_ED_IN;
  costo = 0;
  if(ENTRE1(edad,0,LIMITE1))
    costo = PRIEDAD;
  else 
    if(ENTRE2(edad,LIMITE1,LIMITE2))
      costo = SEGEDAD;
	else
	  costo = TEREDAD;
  return costo;
}