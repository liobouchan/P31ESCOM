#ifndef MAX4_H
#define MAX4_H

//Proposito = Conocer el Maximo de 4 números

#define MAX(a,b)      ((a)>(b)?(a):(b))
#define MAX3(a,b,c)   MAX(MAX(a,b),c)

// Reciclamos lo anteriormente declarado
#define MAX4(a,b,c,d)   MAX(MAX3(a,b,c),d)

#endif
