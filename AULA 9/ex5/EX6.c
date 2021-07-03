#include<stdlib.h>

int main(){

    int m[4][5];

    for( int i = 0; i < 4; i++)
        for( int j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);

    printf("\n");

    for(int j = 0; j < 5; j++)
        printf("%d ", m[0][j] + m[1][j] + m[2][j] + m[3][j]);
    return 0;
}
