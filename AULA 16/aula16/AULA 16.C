#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    FILE *arq;
    arq = fopen("falacomigo.txt", "w+");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        exit(0);
    }
fclose(arq);

}
