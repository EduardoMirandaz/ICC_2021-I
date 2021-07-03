#include<stdio.h>
#include<stdlib.h>

int main () {

int aux;
float ano_dado;

printf("Insira o ano que deseja saber se eh ou nao bissexto: \t\n");
scanf("%f", &ano_dado);

aux = ano_dado;

if (aux/400 == ano_dado/400 && ano_dado > 2021){
    printf("\n O ano de %.f sera bissexto!", ano_dado);}
else if (aux/400 == ano_dado/400 && ano_dado < 2021 ){
    printf("\n O ano de %.f  foi bissexto!", ano_dado);}

else if (ano_dado/4 == aux/4 && ano_dado/100 != aux/100 && ano_dado < 2021){printf(" O ano de %.f foi bissexto!", ano_dado);}
else if (ano_dado/4 == aux/4 && ano_dado/100 != aux/100 && ano_dado > 2021){printf(" O ano de %.f sera bissexto!", ano_dado);}

















return 0;
}
