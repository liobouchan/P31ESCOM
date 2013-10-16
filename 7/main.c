#include <stdio.h>
#include "maximo.h"

main(){

  int a,b,c,d;
  
  //Asignacion de valores.
  a=1; b=2; c=5; d=3;

  //Imprimir el máximo de diferentes numeros en distinto orden.
  printf("El máximo de los numeros(%d,%d,%d,%d)=%d\n",a,b,c,d,MAX4(a,b,c,d));
  printf("El máximo de los numeros(%d,%d,%d,%d)=%d\n",a,c,b,d,MAX4(a,c,b,d));
  printf("El máximo de los numeros(%d,%d,%d,%d)=%d\n",d,b,c,a,MAX4(d,b,c,a));
  printf("El máximo de los numeros(%d,%d,%d,%d)=%d\n",c,a,d,b,MAX4(c,a,d,b));

  return 0;
}
