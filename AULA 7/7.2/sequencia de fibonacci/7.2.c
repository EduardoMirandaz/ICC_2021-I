#include<stdio.h>


int main(){

    int numero, auxiliar;
    scanf("%d", &numero);

   int primeiroNum = 0, segundoNum = 1;

    printf("0 1 ");

    while(auxiliar <= numero){
        auxiliar = primeiroNum + segundoNum;
        printf("%d ", auxiliar);
        primeiroNum = segundoNum;
        segundoNum = auxiliar;
    }
    printf("\n");
}
