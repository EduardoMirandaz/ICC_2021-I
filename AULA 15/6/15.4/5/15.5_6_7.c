#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include <locale.h>

//setlocale(LC_ALL, "");

/**
15.4) Crie um registro para os funcion�rios de uma
empresa com as seguintes informa��es: n�mero do
funcion�rio, nome, idade, telefone, cargo e sal�rio. O
programa deve manter o cadastro de at� 100
funcion�rios.

 */

void findPosition(struct funcionarios *vetorDeFunc, int *pVazia);

int interface();


struct funcionarios{

int numero;
char nome[20];
int idade;
int telefone;
char cargo[20];
float salario;

};


int main(){
//    struct funcionarios;
    int vazio, *pVazia;
    struct funcionarios *pF = (struct funcionarios *)calloc (100, sizeof(struct funcionarios));
    findPosition(&pF[0], pVazia);
    pVazia = &vazio;

    while (x != 6){

    printf("Insira o que deseja fazer:\n");
    printf("'1' para inserir funcion�rio\n");
    printf("'2' para listar todos os funcion�rios\n");
    printf("'3' para procurar por algum funcion�rio\n");
    printf("'4' para eliminar o cadastro de um funcion�rio\n");
    printf("'5' para alterar as informa��es de um funcion�rio\n");
    printf("'6' para sair\n");

    if(x == 1){
        insertFunc(&pF[*pVazia]);

    }
    else if(x == 2)
        listarFunc();
    else if(x == 3)
        searchFunc();
    else if(x == 4)
        deleteFunc();
    else if(x == 5)
        changeFunc();

    scanf("%d", &x);

    }
}

void findPosition(struct funcionarios *vetorDeFunc, int *pVazia){
    int aux = 0;
    while(vetorDeFunc[aux].numero != 0){
        aux++;
    }
    if(aux > 100){
        printf("Sem espa�o!");
        exit(1);
    }
    *pVazia = aux;
}


void insertFunc(struct *pF, int *pVazia){
    printf("\nInsira o nome\n:");
    fgets(&pF[pVazia].nome, 30, stdin);

}

