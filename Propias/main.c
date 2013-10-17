#include<stdio.h>
#include "minmax.h"

main(){

  int a,b,c,d,e,maxmin;
  a=1; b=8; c=5; d=5; e=6;

  int minimos(int a, int b, int c, int d, int e){
    int mina;
    int minb;
    int minc;
    int mind;
    int mine;
    int maxmin;

    maxmin=0;

    mina=MIN(a,b);
    minb=MIN(b,c);
    minc=MIN(c,d);
    mind=MIN(d,e);
    mine=MIN(c,e);

    maxmin=MAX5(mina,minb,minc,mind,mine);

    return maxmin;

  }

  printf("%d\n",minimos(a,b,c,d,e));
}