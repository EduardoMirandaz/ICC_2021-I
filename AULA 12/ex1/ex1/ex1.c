#include<stdio.h>

int troca(int *pI1, int *pI2){

pI1 = *pI2;
pI2 = *pI1;

return(pI1, pI2);
}



int main(){
int change, x, y, *pI1, *pI2;
scanf("%d %d", &x, &y);

pI1 = &x;
pI2 = &y;

troca(*pI1, *pI2);

printf("%d %d", x, y);

}

