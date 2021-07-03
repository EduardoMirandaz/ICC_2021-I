#include <stdio.h>
int main(){
    float a[2], b[2], c[2];

    scanf("%f %f %f %f", &a[0], &a[1], &b[0], &b[1]);

    c[0] = 30*(b[0] - a[0]);
    c[1] = 0.5*(b[1] - a[1]);

    float grau = c[0]+c[1];

    if(grau < 0)
        grau = grau * -1;

    if(grau > 180)
        grau = 360 - grau;
    printf("%f", grau);

}
