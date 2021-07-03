#include<stdlib.h>
#include<stdio.h>

int main(){
    int X, Y, Z, fatoresX;
    scanf("%d%d%d", &X, &Y, &Z);
    int maior, menor;

    if(X > Y){
    	maior = X;
    }else{
        maior = Y;
    }
    if(Z > maior){
        maior = Z;
    }

    if(X < Y){
    	menor = X;
    }
    else{
        menor = Y;
    }
    if(Z < menor){
        menor = Z;

    }
//printf("%d", maior);


    for (int i = 0; i<maior; i++){

        if(X % i == 0){

            fatoresX = X/i;
            printf("%d", X);
        }

    }
}



















