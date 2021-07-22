#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void soma_vetor(int *vetor1, int *vetor2, int *vetor_res, int tamanhoN);
int pegarTamanhoVetores(int tamanhoN);
void preencherVetores1e2(int *vetor1, int *vetor2, int tamanhoN);
void printar(int *vetor1, int *vetor2, int tamanhoN);

int main(){

    int *vetor1, *vetor2, *vetor_res, tamanhoN;//, *p1, *p2, vetor_res;
    tamanhoN = pegarTamanhoVetores(tamanhoN);
    vetor1 = (int*)calloc(tamanhoN, sizeof(int));
    vetor2 = (int*)calloc(tamanhoN, sizeof(int));
    vetor_res = (int *) calloc(tamanhoN, sizeof(int));
    preencherVetores1e2(vetor1, vetor2, tamanhoN);
    printar(&vetor1[0],&vetor2[0], tamanhoN);
    soma_vetor(vetor1, vetor2, vetor_res, tamanhoN);



    }

int pegarTamanhoVetores(int tamanhoN){
    printf("Insira o numero de elementos dos seus 2 vetores\n");
    scanf("%d", &tamanhoN);
    return(tamanhoN);
}

void preencherVetores1e2(int *vetor1, int *vetor2, int tamanhoN){

    printf("Insira os valores do primeiro vetor!\n");
        for(int k = 0; k < tamanhoN; k++){
            scanf("%d", &vetor1[k]);
        }
    printf("Insira os valores do segundo vetor!\n");
        for(int l = 0; l < tamanhoN; l++)
            scanf("%d", &vetor2[l]);
}


void printar(int *vetor1, int *vetor2, int tamanhoN){

}

void soma_vetor(int *vetor1, int *vetor2, int *vetor_res, int tamanhoN){
    for(int i = 0; i < tamanhoN; i++){
        vetor_res[i] = vetor1[i] + vetor2[i];
    }
    printf("O vetor soma eh = { ");
    for(int j =0; j<tamanhoN; j++){
        printf("%d ", vetor_res[j]);
        if(j == tamanhoN-1)
            printf("}");
    }
}
