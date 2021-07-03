#include <stdio.h>
int main(){
    float E, N, Rn;
    scanf("%f %f", &E, &N);
    Rn = E/2;
    for(int a = 1; a < N; a++)
        Rn = (Rn + (E/Rn))/2;
    printf("%f\n", Rn);
    return 0;
}

