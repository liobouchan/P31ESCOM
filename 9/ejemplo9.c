#include "ejemplo9.h"

int mayor4(int a, int b, int c, int d, int e){
  int mayorde4;
  if(!IGUAL(a,b,c,d,e)==0)
    return E_IGUALES;
	mayorde4 = 0;
  if(MAX(MAX(a,b),MAX(c,d))<e)
    mayorde4= MAX(MAX(a,b),MAX(c,d));
  if(MAX(MAX(a,b),MAX(c,e))<d)     
    mayorde4= MAX(MAX(a,b),MAX(c,e));
  if(MAX(MAX(a,b),MAX(e,d))<c)     
    mayorde4= MAX(MAX(a,b),MAX(e,d));
  if(MAX(MAX(a,e),MAX(c,d))<b)     
    mayorde4= MAX(MAX(a,e),MAX(c,d));
  if(MAX(MAX(e,b),MAX(c,d))<a)
    mayorde4= MAX(MAX(e,b),MAX(c,d));
  return mayorde4;
}