#include<stdio.h>

int main(){

int m[10];

for (int i = 0; i < 10; i++){

    scanf("%d", &m[i]);
}

for (int a = 9; a >= 0; a--){

    printf("%d", m[a]);
}

return 0;}
