#include<stdlib.h>

int main(){

int m[10], menor = 0;

    for(int i = 0; i < 10; i++){

        scanf("%d", &m[i]);

        if(m[i] < menor){
            menor = m[0];
            m[0] = m[i];
        }
    }
         printf("%d ", m[0]);
         printf("%d ", m[1]);
         printf("%d ", m[2]);
         printf("%d ", m[3]);
         printf("%d ", m[4]);
         printf("%d ", m[5]);
         printf("%d ", m[6]);
         printf("%d ", m[7]);
         printf("%d ", m[8]);
         printf("%d ", m[9]);
         printf("%d ", m[10]);
    return 0;
}
