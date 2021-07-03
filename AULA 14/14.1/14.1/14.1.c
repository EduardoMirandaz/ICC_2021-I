#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void contaPalavras(char *a);

int main(){
    char a[51];
    gets(a);
        if(a[0] == '\0')
        {
            printf("\n\n =-=-=-=-=-Nenhum caracter foi inserido!=-=-=-=-=-\n\n");
            exit(1);
        }
    contaPalavras(a);
    free(a);

}

void contaPalavras(char *a){
    int contador = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        if((a[i] == ' ') && (a[i+1] != ' '))
            contador++;
    }
    printf("Tivemos %d palavra(s)!", contador+1);
}

