#include<stdio.h>

int main(){

    int m[25], menor, maior;
        scanf("%d", &m[0]);
        maior = m[0];
        menor = m[0];
    for (int i = 1; i < 25; i++){
        scanf("%d", &m[i]);
        if (m[i] < menor){
            menor = m[i];
        }   else if(m[i] > maior){
            maior = m[i];
        }
    }printf("%d %d", menor, maior);

return 0;}
