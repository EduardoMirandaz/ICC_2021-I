#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct carros{
    char fabricante[50];
    char modelo[50];
    char cor[20];
    int ano;
    float preco;
};

int main(){
    struct carros c;
    printf("Modelo: ");
    fgets(c.modelo,100,stdin);
    printf("Fabricante: ");
    fgets(c.fabricante,100,stdin);
    printf("Cor: ");
    fgets(c.cor,100,stdin);
    printf("Ano: ");
    scanf("%d",&c.ano);
    printf("Pre�o: ");
    scanf("%f",&c.preco);

    printf("\n=-=-=-=-=-=-=-=-=-=-=-==-=\n");

    printf("Modelo: %s",c.modelo);
    printf("Fabricante: %s",c.fabricante);
    printf("Cor: %s",c.cor);
    printf("Ano: %d\n",c.ano);
    printf("Pre�o: R$%.2f\n",c.preco);
}
