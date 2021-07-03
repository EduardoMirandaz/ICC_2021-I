#include<stdio.h>
int main(){

int m[4][5], soma, a = 0;
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 4; i++){
        scanf("%d", &m[i][j]);
        soma = a + m[i][j];
        a = m[i][j];
    }
    }printf("%d", soma);





return 0;}
