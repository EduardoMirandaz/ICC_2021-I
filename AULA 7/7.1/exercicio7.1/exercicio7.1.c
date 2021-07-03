#include <stdio.h>
#include <math.h>
#include<stdlib.h>


int main(){
float P1, P2, P3, T1, T2, notaMaior, mediaAtv, mediaGeral;
scanf("%f%f%f%f%f", &P1, &P2, &P3, &T1, &T2);
mediaAtv = ((T1 + T2)/2) * 0.3;


if (P1 > P2){

        if (P2 > P3){
            notaMaior = ((P1+P2)/2)*0.7;
                    mediaGeral = (mediaAtv + notaMaior);
           printf("%f", mediaGeral);}
        else { notaMaior = ((P1+P3)/2)*0.7;
            mediaGeral = (mediaAtv + notaMaior);
           printf("%f", mediaGeral);}
}
    else // P2 > P1
            if (P2>P3){

        if (P1 > P3){
            notaMaior = ((P1+P2)/2)*0.7;
                    mediaGeral = (mediaAtv + notaMaior);
           printf("%f", mediaGeral);}
         else  { notaMaior = ((P2+P3)/2)*0.7;
            mediaGeral = (mediaAtv + notaMaior);
           printf("%f", mediaGeral);}

        }

        else {{ notaMaior = ((P2+P3)/2)*0.7;
            mediaGeral = (mediaAtv + notaMaior);
           printf("%f", mediaGeral);}}






    }

































