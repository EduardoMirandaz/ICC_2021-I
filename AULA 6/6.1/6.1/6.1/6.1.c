#include<stdlib.h>
#include<stdio.h>

int main(){

int x, y, mult, i;



printf("insira base\n");
scanf("%d", &x);
printf("insira o expoente:\n");
scanf("%d", &y);

mult = 1;

 for(i = 1; i <= y; i++){

    mult = mult*x;
}    printf("x elevado a y eh %d", mult);

















}
