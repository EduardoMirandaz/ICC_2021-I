#include<stdio.h>

void darNotaAlunos(struct alunos vetorDeAlunos[]);

struct alunos{

char nome[20];
int nUSP;
int finalMedia;

};


int main(){

    struct alunos vetorDeAlunos[4];
    darNotaAlunos(vetorDeAlunos);


}

void darNotaAlunos(struct alunos vetorDeAlunos[]){

    printf("oi");

}
