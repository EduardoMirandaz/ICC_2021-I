#include<stdio.h>
#include<stdlib.h>

/**
 Crie uma função que recebe um inteiro N como
argumento, aloca e lê um vetor de N inteiros.
Crie outra função que recebe um vetor de inteiros
e o número de elementos no vetor (N) e retorna a
soma dos positivos.
O programa principal deve ler o valor de N,
executar as duas funções, imprimir o valor
retornado pela 2ª função e liberar a memória
alocada pela 1ª função.

*/
int somaPosi(int *pV, int n);
void vetorDeInt(int n, int **vetor);

int main()
{
    int n, *pV, soma;
    scanf("%d", &n);
    vetorDeInt(n, &pV);
    soma = somaPosi(pV, n);
    printf("%d", soma);
    free(*pV);
}

void vetorDeInt(int n, int **pV){
    // dois ponteiros pois quero o ENDEREÇO de um ponteiro!
    *pV = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", (*pV+i));
}

int somaPosi(int *pV, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        if(pV[i] > 0)
        {
            soma = pV[i] + soma;
        }
    }
    return soma;
}
