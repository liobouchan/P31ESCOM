#include<stdio.h>
#include "ejemplo.h"

int main(){
  int a;
  float b;
  a = 90;
  b = 10.0;
  printf("%f\n",sueldo(a,b));
  a = 15;   
  b = 10.0; 
  printf("%f\n",sueldo(a,b));
  a = 32;   
  b = -10.0; 
  printf("%f\n",sueldo(a,b));
  a = 43;   
  b = 10.0; 
  printf("%f\n",sueldo(a,b));
  a = 50;   
  b = 10.0; 
  printf("%f\n",sueldo(a,b));
  a = 10;   
  b = 10.0; 
  printf("%f\n",sueldo(a,b));
  a = 45;   
  b = 10.0; 
  printf("%f\n",sueldo(a,b));
  return 0;
}