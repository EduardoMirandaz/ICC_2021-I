#include<stdio.h>
#include <stdlib.h>

int main(){
int a, soma, aux = 0, divisor;
scanf("%d", &a);

    for(int i = 1; i<a; i++){
        if (a % i == 0){
            divisor = i;
            soma = divisor + aux;
            aux = soma;
        }
    }
    if(soma == a){
    printf("1");
    }
    else{printf("0");
    }
}
