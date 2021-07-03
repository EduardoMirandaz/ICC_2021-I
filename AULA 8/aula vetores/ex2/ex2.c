#include<stdio.h>
#include<stdlib.h>

int main(){
int a = 0, soma, m[10];

for (int i = 0; i < 10; i++){
    scanf("%d", &m[i]);
    if(i % 2 != 0){
        soma = a + m[i];
        a = soma;
    }
}
printf("%d", soma);
return 0;
}
