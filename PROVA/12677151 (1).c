#include<stdio.h>

int main(){
int ano = 0;
scanf("%d", &ano);
int i = 1986;
while(i < ano){
    i = i+76;
}
printf("%d", i);
}
