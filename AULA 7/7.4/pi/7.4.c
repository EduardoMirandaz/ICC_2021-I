#include<stdlib.h>
#include<stdio.h>

int main(){

    float pi, a, aux;
    int n, b;
    scanf("%d", &n);

    if(n == 1){
        printf("%d", 4);
        return 0;
    }

    for(int i=1; i <= n; i++){
        if (i == 1){
            pi = 4;
            aux = 4;
            b = 3;
            a = 4;
            continue;
        }
        if( i % 2 == 0){
            pi = aux - a/b;
            b = b + 2;
            aux = pi;
        }
        else{
            pi = aux + a/b;
            b = b + 2;
            aux = pi;
        }
     }
        printf("%f\n", pi);
}
