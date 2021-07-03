#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main() {

    float km, L, km_L;

    printf("\n\t\tBem Vindo(a) a calculadora de KM/L do seu carro!");


    printf("Digite aqui o valor em quilometros: \n\t");
    scanf("%f", &km);

    printf("Digite aqui o valor em litros: \n\t");
    scanf("%f", &L);

    km_L = km / L;

        if (km_L < 8){
    printf("\n\t Venda o carro!");
    }
        else if(km_L > 8 && km_L < 12){
    printf("\n\t Economico!");
    }
        else if(km_L > 12){
    printf("\n\t Super economico!");

    }








}
