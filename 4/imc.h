#ifndef IMC_H
#define IMC_H 


#define ENTRE(x,a,b)         ((a)<=(x) && (x)<=(b))
#define INTRAPESO 			  18.50
#define NORMAL                24.99
#define SOBREPESO             25
#define OBESO				  30
#define INFRA				  "infrapeso"
#define NOM                   "normal"
#define SOBRE                 "sobrepeso"
#define OBE                   "obeso"



float IMC(float peso, float altura);

#endif
