#include <stdio.h>
#include <string.h>

/** Criar um programa que lê uma palavra, abre um arquivo de texto chamado "arquivo2.txt" e conta quantas vezes a palavra lida aparece no arquivo.

Obs: a palavra lida pode ser parte de outra palavra. Ex. palavra lida: "casa" e palavra no arquivo: "casamento"

O arquivo utilizado no caso de testes 1 segue em anexo.

    casamento do casal casado
    minha casa azul

*/
int fazParte (char fraseArquivo[], char fraseInput[]);

int main(){
    FILE *arquivo;
    char palavra[500], frase[500];

    if((arquivo=fopen("arquivo2.txt","r+"))==NULL)
        return 0;

    char space[199] = " ";
    char fraseAuxArquivo1[199];

        setbuf(stdin, 0);
        fgets(palavra,198,stdin);
        palavra[strcspn(palavra, "\n")] = 0;

    while (1){
        fgets(fraseAuxArquivo1, 198, arquivo);
        if(feof(arquivo)){
            break;
        }
        else{

        fraseAuxArquivo1[strcspn(fraseAuxArquivo1, "\n")] = 0;

        strcat(space, fraseAuxArquivo1);
        strcpy(frase,space);
        strcat(frase, " ");
        strcat(space, " ");
        }
        }
    fclose(arquivo);



    printf("%d",fazParte(frase,palavra));

    return 0;
}



int fazParte (char fraseArquivo[], char fraseInput[]){
    int contador = 0;
    for(int i = 0; i <= strlen(fraseArquivo)-strlen(fraseInput);i++){
        for(int j = 0; j <= strlen(fraseInput); j++){
            if(fraseInput[j] == '\0'){
                    contador++;
            }
            if(fraseInput[j] != fraseArquivo[i+j])
                break;
        }
    }
    return (contador);
}

