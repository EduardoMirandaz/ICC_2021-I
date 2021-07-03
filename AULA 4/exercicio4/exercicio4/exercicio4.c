#include<stdlib.h>
#include<stdio.h>

int main (){

int n1, n2, n3;

    printf("Insira o primeiro numero \t");
    scanf("%d", &n1);

    printf("Insira o segundo numero \t");
    scanf("%d", &n2);

    printf("Insira o terceiro numero \t");
    scanf("%d", &n3);


if (n1 > n2 && n1 > n3 && n2 > n3){printf("\t\n %d eh o maior \t", n1);
                                printf("\t\n%d eh o intermediario\t", n2);
                                printf("\t\n%d eh o menor entre eles\t", n3);}
//n1 - n2 - n3

else if (n1 > n2 && n1 > n3 && n3 > n2){printf("\t\n %d eh o maior \t", n1);
                                printf("\t\n%d eh o intermediario\t", n2);
                                printf("\t\n%d eh o menor entre eles\t", n3);}
//n1 - n3 - n2

                else if (n2 > n1 && n2 > n3 && n1 > n3){printf("\t\n %d eh o maior \t", n2);
                                printf("\t\n%d eh o intermediario\t", n1);
                                printf("\t\n%d eh o menor entre eles\t", n3);}
// n2 - n1 - n3

                else if (n2 > n1 && n2 > n3 && n1 > n3){printf("\t\n %d eh o maior \t", n2);
                                printf("\t\n%d eh o intermediario\t", n3);
                                printf("\t\n%d eh o menor entre eles\t", n1);}
// n2 - n3 - n1

                else if (n3 > n1 && n3 > n2 && n2 > n1){printf("\t\n %d eh o maior \t", n3);
                                printf("\t\n%d eh o intermediario\t", n2);
                                printf("\t\n%d eh o menor entre eles\t", n1);}
// n3 - n2 - n1

                else if (n3 > n1 && n3 > n2 && n2 > n1){printf(" \t\n%d eh o maior \t", n3);
                                printf("\t\n%d eh o intermediario\t", n1);
                                printf("\t\n%d eh o menor entre eles\t", n2);}
// n3 - n1 - n2
                else if (n3 == n1 && n3 > n2 ){printf(" \t\n%d e %d sao os maiores \t", n3, n1);
                                printf("\t\n%d eh o menor entre eles\t", n2);}
//n3=n1 >n2
                else if (n3 == n2 && n3 > n1 ){printf(" \t\n%d e %d sao os maiores \t", n3, n2);
                                printf("\t\n%d eh o menor entre eles\t", n2);}
//n3=n2 >n1
                else if (n2 == n1 && n2 > n3 ){printf(" \t\n%d e %d sao os maiores \t", n2, n1);
                                printf("\t\n%d eh o menor entre eles\t", n2);}
//n2=n1 > n3
                else if (n2 == n1 && n1 == n3 ){printf(" \t\n todos os numeros tem o mesmo valor");}




return 0;}
