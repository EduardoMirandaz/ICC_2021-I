#include<stdio.h>
/**
 Crie uma função que receba um vetor A com 20
inteiros e retorne:
- um vetor B com apenas os números pares de A
- o número de elementos de B
- um vetor C com apenas os números ímpares de A
- o número de elementos de C
Crie um programa que lê o vetor A, chama a
função, recebe e imprime o conteúdo dos vetores B
e C.

 5 3 4 1 2 6 9 7 8 5 4 6 5 2 1 3 6 9 8 7

 */

void trocasx(int* a, int* pares, int* impares);
int main(){

    int a[20], pares[20], contadorPar = 0, impares[20], contadorImpar = 0;


    for(int s = 0; s < 20; s++){
        scanf("%d", &a[s]);
        pares[s] = 0;
        impares[s] = 0;
    }


    trocasx(&a[0], &pares[0], &impares[0]);


    for(int a = 0; a < 20; a++)
        if(pares[a] != 0){
            printf("%d ", pares[a]);
            contadorPar++;
        }
    printf("tivemos %d numeros pares! \n", contadorPar);
    for (int p = 0; p < 20; p++)
        if(impares[p] != 0){
            printf("%d ", impares[p]);
            contadorImpar++;
        }

    printf("tivemos %d numeros impares! \n", contadorImpar);
    if(contadorImpar + contadorPar != 20){
        int zeros = (20 - (contadorImpar+contadorPar));
        printf("e, por fim, tivemos %d zeros!", zeros);
    }
}

void trocasx(int* a, int* pares, int* impares){

    for(int o = 0; o < 20; o++){
        if(a[o]%2 == 0){
            pares[o] = a[o];
        }
        if(a[o]%2 != 0){
            impares[o] = a[o];
        }
    }
}

