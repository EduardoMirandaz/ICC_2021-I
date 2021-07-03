#include<stdio.h>
#include<stdlib.h>

int vetorDeInt(int n, int vetor);
int main()
{
    int n, *pV, memory;
    scanf("%d", &n);
    memory = (int *) calloc(n, sizeof(int));
    printf("%d", memory);
}/*
    int vetor[*pV];
    vetorDeInt(n, vetor);
}

int vetorDeInt(int n, int vetor)
{
    int soma, aux = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", vetor[i]);
        if(vetor[i]%2 == 0){
            soma = vetor[i] + aux;
            aux = soma;
        }
    }
    printf("%d", soma);
}
*/
