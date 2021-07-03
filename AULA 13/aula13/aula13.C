#include<stdio.h>
#include<stdlib.h>
int main(){
int x;
printf("Insira quantas notas deseja registrar: !\n");
scanf("%d", &x);
int *v;
v = (int*) calloc(x, sizeof(int));
v = &x;
int vetorDeNotas[*v];
float aux;
float soma;
float media;
for(int a = 0; a < x; a++){
    scanf("%d", &vetorDeNotas[a]);
    soma = vetorDeNotas[a] + aux;
    aux = soma;
}
media = soma/x;
printf("A media aritmetica dessas notas eh igual a: %f", media);
free(v);
exit(1);
}
