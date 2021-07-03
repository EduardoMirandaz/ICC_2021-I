#include<stdio.h>

void viraVetor(int* pV);

int main(){

    int a[10];
    for(int i=0; i<10; i++)
        scanf("%d", &a[i]);

    viraVetor(&a[0]);

    for(int g = 0; g < 10; g++)
        printf("%d ", a[g]);

}

void viraVetor(int* pV){
    for(int i = 0; i < 10; i++)
        if(pV[i] < 0)
            pV[i]*= -1;
}
