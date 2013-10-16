#ifndef IGUAL_H
#define IGUAL_H

#define iguales(a,b,c,d)  (a==b || a==c || a==d || b==c || b==d || d==c)?1:0
#define iguales3(a,b,c,d) (a==b && a==c || a==b && a==d || b==c && b==d || b==c && d==c || a==c && c==d)?1:0
#define iguales4(a,b,c,d) (a==b && a==c && a==d && b==c && b==d && d==c)?1:0

int repeticiones(int a, int b, int c, int d);

#endif