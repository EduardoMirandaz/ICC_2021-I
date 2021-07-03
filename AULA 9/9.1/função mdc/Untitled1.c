#include<stdio.h>

int main(){
int a, b, c, maior, mdc = 1, mmc, k, temp=1;

scanf("%d %d %d", &a, &b, &c);

maior = a;
if(b > a && b > c ){
    maior = b;
}
else if(c > a && c > b){
    maior = c;
}
    for (int i = 1; i > maior; i++){
        if(a % i == 0 && b % i == 0 && c % i == 0){
            mdc = i;
        }
    }
    printf("o mdc eh %d \n", mdc);

        k = a*b*c;
        for(int j = 1; j <= k; j++){
            if(j % a == 0 && j % b == 0 && j % c == 0){
            mmc = j;
            break;
            }

        }
    printf("o mmc eh %d", mmc);
}
