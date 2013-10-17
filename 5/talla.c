#include "talla.h"

float talla(int gen,int edad,float peso){
float talla=0.0;
if(gen>1){
return ERROR;
}
else if(gen==1){
if(edad==1 && 9.7<=peso<12.2){
talla=74.7;}
else if(edad==2 && 12.2<=peso<14.1){
talla=86.6;}
else if(edad==3 && 14.1<=peso<15.7){
talla=95.0;}
else if(edad==4 && 15.7<=peso<17.6){
talla=101.9;}
else if(edad==5 && peso>=17.6){
talla=107.9;}
}
else if(gen==0){
if(edad==1 && 9.2<=peso<11.8){
talla=73.5;}
else if(edad==2 && 11.8<=peso<13.7){
talla=84.9;}
else if(edad==3 && 13.7<=peso<15.3){
talla=93.7;}
else if(edad==4 && 15.3<=peso<17.2){
talla=100.8;}
else if(edad==5 && peso>=17.2){
talla=107.1;}
}
return talla;
}
