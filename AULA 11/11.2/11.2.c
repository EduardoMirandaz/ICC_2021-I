#include<stdio.h>

int main(){

    int m[20], aux, contador = 20, copia[contador];
    for (int i=0; i < 20; i++){
        scanf("%d", &m[i]);
    }
    for (int j = 0; j < 20; j++){
        for (int k = j; k < 20; k++){
            if(m[j] != m[k]){
            int copia[contador];
            copia[k] = m[j];
            printf("%d ", copia[contador]);
            }
            else if(m[j] == m[k]){
                contador--;
            }
        }
    }
   // for(int u = 0; u < 20; u++)
     //   printf("%d ", copia[u]);
    }

//1 4 5 6 8 4 7 5 6 4 4 5 6 8 10 2 0 15 4 32
