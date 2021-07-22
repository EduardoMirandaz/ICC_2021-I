#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

/**Criar um sistema que permite o controle de estoque de produtos e o registro de
vendas. O cadastro de produtos deve ter pelo menos os seguintes campos: nome,
código, preço, estoque. O registro de vendas deve ter as seguintes informações:
código do prod., quantidade, data.
*/



int interfaceOpcoes();
void esvaziaProduto(struct produtos *vetorProdutos);
void esvaziaVenda(struct vendas *vetorVendas);
void adicionarProduto();

struct produtos{

char nome[50];
char codigo[8];
float preco;
int estoque;

};

struct vendas{

char codigoProd[8];
int quantidade;
char data[9];

};

int main(){

    printf("=-=-=-=-==-=-==-=-= Controle de Estoque =-=-==-=-==-=-==-=-=\n\n");
    struct produtos vetorProdutos[20];
    struct vendas vetorVendas[20];
    int choice = -1;

    for(int x = 0; x < 20; x++)
    {
        esvaziaProduto(&vetorProdutos[x]);
        esvaziaVenda(&vetorVendas[x]);
    }
    while(1){
        choice = interfaceOpcoes();
        if (choice == 1)
            adicionarProduto();
        else if(choice == 0)
            break;
    }


    printf("Adeus");
}

int interfaceOpcoes(){
    int option = -1;
    while(option < 0 || option > 6)
    {
        printf("Insira o que deseja fazer:\n");
        printf("Insira 1 para adicionar um produto\n");
        printf("Insira 2 para remover um produto\n");
        printf("Insira 3 para editar um produto\n");
        printf("Insira 4 para realizar uma venda\n");
        printf("Insira 5 para mostrar estoque\n");
        printf("Insira insira 0 para sair\n");
        scanf("%d", &option);
        if(option < 0 || option > 6)
            printf("Erro, opcao invalida!\n");
    }

    return option;
}

void esvaziaProduto(struct produtos *vetorProdutos){

    printf("esvaziarProd");

}

void esvaziaVenda(struct vendas *vetorVendas){

    printf("esvaziarVend");

}

void adicionarProduto(){

    printf("");

}
