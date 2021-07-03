#include<stdio.h>

int main(){

    int a, b, m[5][5];
    printf("insira os valores da matriz\n");
    for (int i = 0; i<5; i++)
        for (int j = 0; j<5; j++){
            scanf("%d", &m[i][j]);

        }
    int contador = 0;
    printf("insira o intervalo\n");
    scanf("%d %d", &a, &b);
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            for(int n = a; n <= b; n++){
                if(m[i][j] == n){
                    contador++;
                }
            }
        }
    }
printf("%d", contador);
}

