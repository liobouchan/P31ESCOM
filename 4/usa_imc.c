#include <stdio.h>
#include "imc.h"

float main(){

	float a = IMC(109.5,1.88);

if(a < 18.5){
	printf("Infrapeso \n");
}
else if(ENTRE(a,INTRAPESO,NORMAL)){
 printf("NORMAL \n");
}else if(a>=25 && a<=30){
	printf("Sobrepeso \n");
}else if(a>=30){
	printf("Obeso \n");
}

return 0;


}
