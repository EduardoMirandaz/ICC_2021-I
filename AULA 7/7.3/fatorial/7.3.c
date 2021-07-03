#include<stdlib.h>
#include<stdio.h>

int main(){
    int inteiro;

    scanf("%d", &inteiro);

    if(inteiro == 1 || inteiro == 0){
        printf('1');
    }
    else{
        for (int i=inteiro; inteiro > 1; i--){
        inteiro = inteiro*(inteiro-1);
    }}
printf("%d", inteiro);
}
