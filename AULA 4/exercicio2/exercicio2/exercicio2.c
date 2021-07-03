#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main() {

    float peso, altura, imc;

    printf("\n\t\tBem Vindo(a) a calculadora de imc do seu corpo!");
    printf("Digite aqui o valor em quilos: \n\t");

    scanf("%f", &peso);

    printf("Digite aqui sua altura em centimetros: \n\t");
    scanf("%f", &altura);

    imc = peso / altura*altura;

        if (imc <= 18.5){
    printf("\n\t Abaixo do peso!");
    }
        else if(imc >= 18.6 && imc <= 24.9){
    printf("\n\t Saudavel");
    }
    else if(imc >= 25 && imc <= 29.9){
    printf("\n\t Peso em excesso");
    }
    else if(imc >= 30 && imc <= 34.9){
    printf("\n\t Obesidade grau I");
    }
    else if(imc >= 35 && imc <= 39.9){
    printf("\n\t Obesidade grau II");
    }
    else if(imc >= 40){
    printf("\n\t Obesidade grau III");
    }
}
