#include<stdio.h>
int leiatudo(int *a[0], int *maior, int *menor);

int main(){

/** \brief
Faça um programa que acha o maior e o menor
inteiro dentro de um vetor de 10 inteiros.
Obs: usar apenas as variáveis a seguir:
int v[10], i, *maior, *menor;
6 8 7 4 2 56 6 45 1 2
 */
    int v[10], *maior, *menor;

    leiatudo(&v[0], &maior, &menor);
    printf("%d %d", *maior, *menor);
}

    int leiatudo(int *a[0], int *maior, int *menor){
        maior = a[0];
        menor = a[0];
        for (int i = 1; i < 10; i++){
            scanf("%d", &a[i]);
            if(a[i] > maior){
                maior = a[i];
            }
            if(a[i] < menor){
                menor = a[i];
            }
        }
    }
