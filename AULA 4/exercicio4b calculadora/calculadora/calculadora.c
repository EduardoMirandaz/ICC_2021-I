#include<stdlib.h>
#include<stdio.h>

int main(){

    char mais;
    float a, b;
    float rs;
    printf("insira o primeiro numero: \n\t");
    scanf("%f", &a);
    printf("insira a operacao '+', '-', '*' ou '/':\n\t");
    mais = getche();
    printf("\n");
    printf("insira o segundo numero: \n\t");
    scanf("%f", &b);

if(mais == '+'){
        rs = a+b;
    printf("o resultado eh: %.f", rs);

} else if(mais == '-'){
    rs = a-b;
    printf("o resultado eh: %.f", rs);

} else if(mais == '*'){
    rs = a*b;
    printf("o resultado eh: %.f", rs);


} else if(mais == '/'){
    rs = a/b;
    printf("o resultado eh: %.2f", rs);}

else {printf("insira uma operacao valida\t\n");}











return 0;
}
