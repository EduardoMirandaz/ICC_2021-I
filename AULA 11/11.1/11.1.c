#include<stdio.h>


int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        printf("\n");
        for (int j = 1; j <= b; j++){
        printf("%d ", i*j);
        }
    }
}
/*
2
    2
    4 5
    6 6

    i = 2
    j = 2

    for

    m [0][0] = m[0][0]*m[0][1]*m[1][0]
    m [0][1] = m[0][0]*m[0][1]*m[1][1]
    m [1][0] = m[0][0]*m[1][0]*m[1][1]
    m [1][1] = m[0][1]*m[1][0]*m[1][1]

 */
