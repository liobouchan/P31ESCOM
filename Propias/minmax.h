#ifndef MAXDEMIN_H
#define MAXDEMIN_H

//Calcular Minimos 
#define MIN(a,b)          ((a)<(b)?(a):(b))
#define MIN3(a,b,c)       MIN(MIN(a,b),c)
#define MIN4(a,b,c,d)     MIN(MIN3(a,b,c),d)
#define MIN5(a,b,c,d,e)   MIN(MIN4(a,b,c,d),e)
int minimos(int a, int b, int c, int d, int e);

//Proposito = Conocer el Maximo de 4 números

#define MAX(a,b)      ((a)>(b)?(a):(b))
#define MAX3(a,b,c)   MAX(MAX(a,b),c)

// Reciclamos lo anteriormente declarado
#define MAX4(a,b,c,d)   MAX(MAX3(a,b,c),d)
#define MAX5(a,b,c,d,e) MAX(MAX4(a,b,c,d),e)

#endif
