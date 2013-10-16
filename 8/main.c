#include <stdio.h>
#include "iguales.h"
#include <math.h>

int main(){

  int a,b,c,d;
  
  //Asignacion de valores.
  a=1; b=2; c=3; d=4;
/*
int repeticiones(int a, int b, int c, int d){  
  int num;
  if(iguales4(a,b,c,d)==1){
    num=4;
    return num;
    //printf("%d\n", num);
  }else if (iguales3(a,b,c,d)==1){
    num=3;
    return num;
    //printf("%d\n", 3);
  }else if(iguales(a,b,c,d)==1){
    num=2;
    return num;
    //printf("%d\n", 2);
  }else{
    num=0;
    return num;
    printf("%d\n", 0);
  }
}
*/
printf("El numero de numeros iguales en(%d,%d,%d,%d)==%d\n",a,b,c,d,repeticiones(a,b,c,d));
d=1;
printf("El numero de numeros iguales en(%d,%d,%d,%d)==%d\n",a,b,c,d,repeticiones(a,b,c,d));
c=2;
printf("El numero de numeros iguales en(%d,%d,%d,%d)==%d\n",a,b,c,d,repeticiones(a,b,c,d));
a=3; b=3; d=3; c=3;
printf("El numero de numeros iguales en(%d,%d,%d,%d)==%d\n",a,b,c,d,repeticiones(a,b,c,d));


  return 0;
}
