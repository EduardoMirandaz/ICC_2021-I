#include <stdlib.h>
#include <stdio.h>

int main(){

    int anoInicial, anoFinal;
//printf("Descobridor de ano bissexto\n");
//printf("Insira o primeiro ano\n");
//printf("Insira o segundo ano\n");

    scanf("%d %d", &anoInicial, &anoFinal);
for (anoInicial = anoInicial; anoInicial < anoFinal; anoInicial++){


if ( ((anoInicial % 400) == 0) || (((anoInicial % 4) == 0) && (anoInicial % 100 != 0))){

printf("%d \t", anoInicial);
}

}
}















