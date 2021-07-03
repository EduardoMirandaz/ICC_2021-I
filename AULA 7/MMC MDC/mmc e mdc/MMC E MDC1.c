#include<stdlib.h>
#include<stdio.h>

int main() {

float n1, n2, n3;
int numero;
scanf("%f%f%f", &n1, &n2, &n3);
if (n1 > n2 && n1 > n3)
    numero = n1;
else if (n2 > n1 && n2 > n3)
    numero = n2;
else if (n3 > n1 && n3 > n2)
    numero = n3;


    for (int i = 2; i <= numero; i++){

     if(numero % i == 0){
        numero = numero/i;
     }printf("\n%d", numero);


    //primo = primo / i;

//while (numero % primo == 0;)


}
























}
