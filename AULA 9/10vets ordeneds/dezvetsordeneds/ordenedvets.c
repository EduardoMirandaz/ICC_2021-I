#include<stdio.h>

int main(){
int i, j, z, numero[10];

for (i = 0; i < 10; ++i)
    scanf("%d", &numero[i]);
for (i = 0; i < 10; ++i)
{
    for (j = i + 1; j < 10; ++j)
    {
        if (numero[i] > numero[j])
        {
            z =  numero[i];
            numero[i] = numero[j];
            numero[j] = z;
        }
    }
}
for (i = 0; i < 10; ++i)
    printf("%d ", numero[i]);
}
