#include <stdio.h>
#include "imc.h"



float IMC(float peso, float altura){

float imc = peso / (altura*altura);

return imc;

}
