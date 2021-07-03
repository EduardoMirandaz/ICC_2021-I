/*#include<stdio.h>
#include<stdlib.h>

int main(){

float num, den, som, print, i, somado;
num = 1;
den = 1;
som = 1;
somado = 0;
for ( i = 1; i < 50; i++){
    num = num+2;
    den = den+1;
    //printf("\n%f\n", num);
    //printf("%f\n", den);
    som = num/den;
    //printf("\t\t\t\t\t%.5f", som);
    somado = somado + som;

    printf("\n%f", somado);

}*/

#include <stdio.h>
#include <math.h>

int main(){
int a,b;
float somado, soma=0;
b=1;
for(a=1;a < 50;a++){
  b=b+2;
 printf("\n%d/%d",b,a);

 somado = somado+(b/a);
 }
printf("\n%f",somado);
}























































