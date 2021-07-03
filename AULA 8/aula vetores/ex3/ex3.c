#include<stdio.h>
int main(){
int m[5];
int n[5];
    for (int i = 0; i < 5; i++){
    scanf("%d", &m[i]);
    }
    for (int i = 0; i < 5; i++){
    scanf("%d", &n[i]);
    }
    for (int i = 0; i < 5; i++){
        int a = (m[i] + n[i]);
        printf("%d ", a);
    }
}
