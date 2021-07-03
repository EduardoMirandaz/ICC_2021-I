#include<stdlib.h>
#include<stdio.h>

int main(){

char Nota;
int valor, maior, menor;

printf("Insira a nota: \n");
scanf("%d", &valor);

if (valor < 0){
    printf("insira uma nota valida!");
    exit(0);}

valor = maior;
valor = menor;



while (valor >= 0){

    if( valor > maior){
        maior = valor;
    }
    else if(valor < menor){
        menor = valor;
    }
    scanf("%d", &valor);
}

    printf("a maior nota eh %d, ja a menor, %d", maior, menor);

}














