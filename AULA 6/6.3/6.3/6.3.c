/*#include<stdlib.h>
#include<stdio.h>


int main(){


int inteiro = 0, divisores = 0;
scanf("%d", &inteiro);

for (divisores = divisores+1; divisores <= inteiro; divisores++){

if( inteiro % divisores == 0){
    printf("%d ", divisores);
}
}
}*/

#include<stdlib.h>
#include<stdio.h>


 int main (){

 int ant, seg, aux, valor=0, x;

 ant = 1;
 seg = 1;



 for(int i = 1; i <= 11; i++){

    aux= ant+seg;
    printf("%d", aux);
    ant = seg;
    seg = aux;


} printf("%d", ant);
 printf("%d",  seg); }
















