#include<stdio.h>
#include<stdlib.h>

/**
 Crie uma fun��o que recebe um inteiro N como
argumento, aloca e l� um vetor de N inteiros.
Crie outra fun��o que recebe um vetor de inteiros
e o n�mero de elementos no vetor (N) e retorna a
soma dos positivos.
O programa principal deve ler o valor de N,
executar as duas fun��es, imprimir o valor
retornado pela 2� fun��o e liberar a mem�ria
alocada pela 1� fun��o.

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
    // dois ponteiros pois quero o ENDERE�O de um ponteiro!
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
