#include<stdio.h>
#include<math.h>

float distanciaPontos(float x1, float y1, float x2, float y2);

int main(){
float x1,x2,y1,y2;
scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
float distancia = distanciaPontos(x1, y1, x2, y2);
printf("A distancia entre as coordenadas (%.2f , %.2f) e (%.2f , %.2f) eh: %.2f", x1, y1, x2, y2,distancia);
}

float distanciaPontos(float x1, float y1, float x2, float y2){
float distancia = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
return distancia;
}
