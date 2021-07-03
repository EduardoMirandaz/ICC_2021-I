#include <stdio.h>
int main() {
int i, num, flag[5], a;
//Inicializa a sequencia de números aleatórios.
//Deve ser executada uma única vez no início do programa.
srand(time(NULL));
for(i=0; i<5; i++) {
    num = rand(); // gera números aleatórios
    num = num%99; //limita o número gerado entre 0 e 10
    a = num;
    for(int j = 0; j<5; j++){
        flag[j] = a;
        if(num == flag[j]){
            i--;
        }
    }
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera números aleatórios
num = num%99; //limita o número gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera números aleatórios
num = num%99; //limita o número gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera números aleatórios
num = num%99; //limita o número gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera números aleatórios
num = num%99; //limita o número gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
}
