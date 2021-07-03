#include <stdio.h>
int main(){
    float x[2], y[2], z[2], graus;
    scanf("%f %f %f %f", &x[0], &x[1], &y[0], &y[1]);

    z[0] = 30*(y[0] - x[0]);
    z[1] = 0.5*(y[1] - x[1]);
    graus = z[0]+z[1];
    if(graus < 0)
        graus = graus * -1;

    if(graus > 180)
        graus = 360 - graus;
    printf("%f", graus);
}

