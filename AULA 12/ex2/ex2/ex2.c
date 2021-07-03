#include<stdio.h>
void separa(float a, float* pR, int* pI);
int main(){


/** Solução sem ponteiros
    float a;
    scanf("%f", &a);
    int aux = a;
    printf("%d %f", x, a-aux);


 */


    float a, *pR;
    int *pI;
    scanf("%f", &a);
    int b = a;
    pI = &a;
    pR = &b;
    separa(a, &a, &b);
    printf(" parte inteira: %d\n parte fracionaria: %f", b, a);
}

void separa(float a, float* pR, int* pI){
    *pI = (int)a;
    *pR = a - (int)a;

}
