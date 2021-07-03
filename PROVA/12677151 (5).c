#include <stdio.h>
int main(){
    float a, b, c;
    float K, L, M;
    int contadorA = 0, contadorB = 0, contadorC = 0;

    scanf("%f %f %f", &K, &L, &M);
    scanf("%f %f %f", &a, &b, &c);

    float aBase = a, bBase = b, cBase = c;
    while (a <= K){
        a += aBase;
        contadorA++;
    }
    while (b <= L){
        b = b + bBase;
        contadorB++;
    }
    while (c <= M){
        c = c + cBase;
        contadorC++;
    }

    printf("%d\n", contadorA*contadorB*contadorC);

}
