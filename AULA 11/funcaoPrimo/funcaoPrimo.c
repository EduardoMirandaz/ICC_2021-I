#include<stdio.h>

int ehPrimo(int a);

int main(){

    int a;
    scanf("%d", &a);

    for(int i = 1; i <= a; i++){
        if(ehPrimo(i) == 1){
            printf("%d ", i);
        }
    }
}

int ehPrimo(int a){
    if((a == 0)||(a == 1)){
        return 0;
    }
    else if(a ==2){
        return 1;
    }

    for(int i = 2; i < a; i++){
        if(a % i == 0){
                return 0;
        }
    }
    return 1;
}
