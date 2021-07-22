#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carros{
    char fabricante[50];
    char modelo[50];
    char cor[20];
    int ano;
    float preco;
};

int below2000(struct carros c, int *pC, char *pS);

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
    printf("Preço: ");
    scanf("%f",&c.preco);

    c.fabricante[strcspn(c.fabricante, "\n")] = 0;

    char* pS = &c.fabricante;
    int* pC = &c.ano;
    int a = below2000(c, pC, pS);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-==-=\n");

    printf("Modelo: %s",c.modelo);
    printf("Fabricante: %s",c.fabricante);
    printf("\nCor: %s",c.cor);
    printf("Ano: %d\n",c.ano);
    printf("Preço: R$%.2f\n",c.preco);
}
int below2000(struct carros c, int *pC, char *pS){

    if(stricmp(pS, "Chevrolet") == 0)
        strcpy(pS, "GM");

    if (*pC < 2000)
    {
        *pC = 2000;
    }
    return c.ano;
}
