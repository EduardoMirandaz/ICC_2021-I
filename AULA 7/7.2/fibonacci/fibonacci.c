#include<stdio.h>

int main(){
    int i, a, s, fib = 1;
    scanf("%d", &i);

    a = 0;
    s = 1;

    if(i == 1)
        printf("0 1 1 2");
    else if(i == 0)
        printf("0 1");
    else if(i < 0)
        return 0;
    else{
            printf("0 1 ");
        while(i >= fib){
            fib = a + s;
            printf("%d ", fib);
            a = s;
            s = fib;
        }
    }
    return 0;
}

