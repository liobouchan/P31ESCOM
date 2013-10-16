#include "iguales.h"

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
    //printf("%d\n", 0);
  }
}