#include<stdio.h>
#include<stdlib.h>

/**
Crie uma função que recebe um inteiro N e um vetor de N elementos, e preenche o vetor com os N
primeiros múltiplos de N.

Exemplos: N=3 Vetor={3, 6, 9} / N=4 Vetor={4, 8, 12, 16}

Crie um programa que lê um inteiro N, aloca dinamicamente um vetor de inteiros N, chama a função
definida anteriormente e imprime o os N valores do vetor (separados por espaços) após executar a função.
*/


void multiplos(int a, int *pI);

int main(){

    int a, *pI;
    printf("Insira o numero: ");
    scanf("%d", &a);
    pI = (int*) calloc(a, sizeof(int));
    multiplos(a, pI);
    free(pI);
    return 0;

}

void multiplos(int a, int *pI){
    int vetor[*pI];
    for(int x = 0; x < a; x++){
        vetor[x] = x*a;
        printf("%d ", vetor[x]);
    }
}
