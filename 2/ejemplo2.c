#include "ejemplo2.h"

int dias_mes(int anio, int mes){
  int dias;
  if(!ENTRE(mes,0,12))
    return E_MES_IN;
  if(!(anio>=0))
    return E_A_IN;
  dias=0;
  if(mes==1 || mes==3 || mes==5 || mes==7|| mes==8 || mes ==10|| mes==12)
    dias = D_EMMJLAOD;
  if(mes==4 || mes==6 || mes==9 || mes==11)
	dias = D_ABJNSN;
  if(mes==2){
    if(BISIESTO(anio)==0)
	  dias = D_FEBB;
	else
	  dias = D_FEBN;
  }
	 return dias;
}