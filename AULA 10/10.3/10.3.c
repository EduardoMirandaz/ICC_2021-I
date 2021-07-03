#include<stdio.h>

int calculaMdc(int a, int b, int c);
int calculaMmc(int a, int b, int c);

int main(){

    int a, b, c, Rmdc, Rmmc;

    scanf("%d %d %d", &a, &b, &c);

    Rmdc = calculaMdc(a, b, c);
    Rmmc = calculaMmc(a, b, c);

    printf("O mmc eh: %d, ja o mdc, %d", Rmmc, Rmdc);
}

int calculaMmc(int a, int b, int c){
        //verifica qual é o maior
    int maior = a;
    if((b > a) && (b > c)){
        maior = b;
    }
    else if((c > a) && (c > b)){
        maior = c;
    }

    int mmc;
    for(int j = a*b*c; j >= maior; j--){
        if((j % a == 0) && (j % b == 0) && (j % c == 0)){
            mmc = j;
        }
    }
    return mmc;
}

int calculaMdc(int a, int b, int c){

        //verifica qual é o maior
    int maior = a;
    if((b > a) && (b > c)){
        maior = b;
    }
    else if((c > a) && (c > b)){
        maior = c;
    }


    int mdc;

        for(int i = maior; i > 0; i--){
            if((a%i == 0) && (b%i == 0) && (c%i == 0)){
                mdc = i;
                break;
            }
        }
    return mdc;
}
