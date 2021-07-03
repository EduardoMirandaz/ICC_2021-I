#include<stdio.h>

int main(){

int m[4][5];
int soma[5];
            //le a linha 1//
    for (int j = 0; j < 5; j++){
        scanf("%d", &m[0][j]);
        soma[j] = m[0][j];
    }
            //le a linha 2
    for (int j = 0; j < 5; j++){
        scanf("%d", &m[1][j]);
        soma[j] = soma[j]+ m[1][j];

    }       //le a linha 3
        for (int j = 0; j < 5; j++){
        scanf("%d", &m[1][j]);
        soma[j] = soma[j]+ m[1][j];
    }       //le a linha 4
        for (int j = 0; j < 5; j++){
        scanf("%d", &m[1][j]);
        soma[j] = soma[j]+ m[1][j];
    }
    for (int j = 0; j < 5; j++){
    printf("%d ", soma[j]);
    }
return 0;
}


