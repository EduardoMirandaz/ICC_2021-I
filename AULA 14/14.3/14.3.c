#include<stdio.h>
#include<stdlib.h>
/**
14.3)
    Crie uma função que recebe 2 strings (A e B) e
retorna 1 se B é parte de A, sem usar funções da
biblioteca string.h. A função retorna 0 caso contrário.
*/
int fazParte(char *a, char *b);

int main(){


    char a[100], b[100];

    int resultado = fazParte(&a[0], &b[0]);

    if(resultado == 0)
        printf("B nao faz parte de A!");
    else if(resultado == 1)
        printf("B faz parte de A!");

}

int fazParte(char *a, char *b){

/** Se B faz parte de A*/
    int contadorLA;
    int contadorLB;

    printf("Insira a frase A! \n");
    gets(a);
    for(int z = 0; a[z] != '\0'; z++)
    {
        printf("%c", a[z]);
        contadorLA++;
    }
        printf("\n=-=-=-=-=%d", contadorLA);
    printf("\n");
    printf("Insira a frase B! \n");
    gets(b);
    for(int x = 0; b[x] != '\0'; x++)
    {
        printf("%c", b[x]);
        contadorLB++;
    }

        printf("\n");
        printf("\n=-=-=-=-=%d\n", contadorLB);
    if (contadorLB > contadorLA)
        return 0;
    else{

    for (int o = 0; o < contadorLA-contadorLB; o++)
        for(int g = 0; g< contadorLA; g++)
            for(int j = 0; j < contadorLB; j++)
                if(a[g] == b[j])
                {
                    return 1;
                }
    return 0;
}
}
