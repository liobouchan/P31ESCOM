#include <stdio.h>

main(){

  int a,b,c,d,w,x;
  
  //Asignacion de valores.
  a=1; b=2; c=5; d=3;

  if(a==b){
    w=2;
    return w;
  }else if(c==d){
    w=2;
    return w;
  }else if(a==c){
    w=2;
    return w;
  }else if(b==d){
    w=2;
    return w;
  }else if(a==d){
    w=2;
    return w;
  }else if(b==c){
    w=2;
    return w;
  }

  printf("%d\n",w);
  //return 0;
}
