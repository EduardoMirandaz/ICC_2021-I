#include <stdio.h>
int main() {
int i, num, flag[5], a;
//Inicializa a sequencia de n�meros aleat�rios.
//Deve ser executada uma �nica vez no in�cio do programa.
srand(time(NULL));
for(i=0; i<5; i++) {
    num = rand(); // gera n�meros aleat�rios
    num = num%99; //limita o n�mero gerado entre 0 e 10
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
num = rand(); // gera n�meros aleat�rios
num = num%99; //limita o n�mero gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera n�meros aleat�rios
num = num%99; //limita o n�mero gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera n�meros aleat�rios
num = num%99; //limita o n�mero gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
for(i=0; i<5; i++) {
num = rand(); // gera n�meros aleat�rios
num = num%99; //limita o n�mero gerado entre 0 e 10
printf("%d ", num);
}
printf("\n");
}
