#include <stdio.h>

main(){
/*
  int a,b,c,d,w,x;
  
  //Asignacion de valores.
  a=1; b=1; c=1; d=1;

  if(a==b){
    w=2;
    printf("%d\n",w);
  }else if(c==d){
    w=2;
    printf("%d\n",w);
  }else if(a==c){
    w=2;
    printf("%d\n",w);
  }else if(b==d){
    w=2;
    printf("%d\n",w);
  }else if(a==d){
    w=2;
    printf("%d\n",w);
  }else if(b==c){
    w=2;
    printf("%d\n",w);
  }else if(a==b && b==c){
    w=3;
    printf("%d\n",w);
  }else if(a==b && b==d){
    w=3;
    printf("%d\n",w);
  }else if(a==c && c==d){
    w=3;
    printf("%d\n",w);
  }else if(b==c && c==d){
    w=3;
    printf("%d\n",w);
  }else if(a==b && b==c && c==d){
    w=4;
    printf("%d\n",w);
  }else{ 
    w=0;
    printf("%d\n",w);
  }
  */

  int a,b,c,d,w,x;
  
  //Asignacion de valores.
  a=1; b=2; c=3; d=1;

  int distinto3(int a, int b, int c){
    int d1y2 = a!=b;
    int d1y3 = a!=c;
    int d2y3 = b!=c;
    return d1y2 && d1y3 && d2y3;
  }

  printf("%d\n",distinto3(a,b,c) );

}
