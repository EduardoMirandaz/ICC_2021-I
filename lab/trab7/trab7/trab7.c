#include<stdio.h>
void divisores(int* pV, int n);

int main(){

    int n, pV[20];
    for(int a = 0; a < 20; a++)
        pV[a] = 0;
    scanf("%d", &n);
    divisores(&pV[0], n);
}

void divisores(int* pV, int n){
    int flag = 1;
    for(int a = 0; a <= 20; a++){
        for(int u = flag; u < n; u++){
            if(n%u == 0){
                pV[a] = u;
                flag = u+1;
                break;
            }
        }
    }
        for(int z = 20-1; z >= 0; z--){
        if(pV[z] != 0){
            printf("%d ", pV[z]);
        }
    }
}





