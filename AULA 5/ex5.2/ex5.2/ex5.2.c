#include<stdlib.h>
#include<stdio.h>


int main() {

float porcentagem, nota, media, somatorio;
int contadorDeAlunoMaior, contadorDeAlunoMenor;
scanf("%f", &nota);
contadorDeAlunoMaior = 0;
contadorDeAlunoMenor = 0;
while (nota >= 0){

        if (nota < 5){
            contadorDeAlunoMenor++;
        } else if (nota >=5){
            contadorDeAlunoMaior++;
        }

    somatorio = somatorio + nota;
scanf("%f", &nota);

}

        media = somatorio / (contadorDeAlunoMaior + contadorDeAlunoMenor);
float contadorDeAlunoMaiorF = contadorDeAlunoMaior;
float contadorDeAlunoMenorF = contadorDeAlunoMenor;
porcentagem = (contadorDeAlunoMaior / (contadorDeAlunoMaiorF + contadorDeAlunoMenorF))*100;
printf("%d %d %f %f", contadorDeAlunoMaior, contadorDeAlunoMenor, media, porcentagem);
}
