#include<stdio.h>

float areaTriang(float b, float h);


int main(){
int b, h;
scanf("%d %d", &b, &h);
int resultado = areaTriang(b, h);
printf("O valor do triangulo de base %d e altura %d eh: %d", b, h, resultado);
}

float areaTriang(float b, float h){
    float calculaArea;
    calculaArea = h*b/2;
    return(calculaArea);
}

