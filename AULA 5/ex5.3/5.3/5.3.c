#include<stdlib.h>
#include<stdio.h>

int main(){

int x, y, soma = 0;

scanf("%d%d", &x, &y);

 if (x == 0 && y == 0){ return 0;}


if (x !=0 && x < y){
for ( x = x; x <= y; x++){

        soma = soma + x;}

                                  printf("%d", soma);
}


else if (x !=0 && x > y){

                        for ( y = y; y <= x; y++){

                        soma = soma + y;}
                                printf("%d", soma);
}
else if (x == 0 && y != 0){

                        for ( x = x; x <= y; x++){

                        soma = soma + x;}
printf("%d", soma);}

else if (y == 0 && x != 0){

                        for ( y = y; y <= x; y++){

                        soma = soma + y;}
printf("%d", soma);}
}



