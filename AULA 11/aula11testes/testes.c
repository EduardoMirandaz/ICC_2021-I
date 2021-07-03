#include<stdio.h>
#include<math.h>
float distancia(float x1, float y1, float x2, float y2);
float distancia(float x1, float y1, float x2, float y2){
    if(x1 > x2){
        float temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if(y1 > y2){
        float temp = y1;
        y1 = y2;
        y2 = temp;
    }
    float distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return(distancia);
}
int main(){
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%f", distancia(x1, y1, x2, y2));
return 0;
}
