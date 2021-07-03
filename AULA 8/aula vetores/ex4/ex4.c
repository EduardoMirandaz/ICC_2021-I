#include<stdio.h>
int main(){
    int m[10], maior = 0;
    scanf("%d", &m[0]);
    for(int i=0; i < 9; i++){
        scanf("%d", &m[i]);
        int a = m[i-1];
        if(m[i] - a > maior){
        maior = m[i] - a;
        }
    }
    printf("%d", maior);
    return 0;
}
