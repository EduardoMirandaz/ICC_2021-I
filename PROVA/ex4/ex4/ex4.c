#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vetorF[n];
    vetorF[n-1] = 1;
    vetorF[n-2] = 1;
    for(int j = n-3; j >= 0; j--)
        vetorF[j] = vetorF[j+1] + vetorF[j+2];
    for(int j = 0; j < n; j++)
        printf("%d ", vetorF[j]);
}
