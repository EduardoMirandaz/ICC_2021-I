#include<stdlib.h>
#include<stdio.h>

int main(){


int n;
scanf("%d", &n);
char m[5];

for (int i = 0; i < n; i++){

 scanf("%c ", &m[i]);

}
printf("\n");
for (int a = 0; a < n; a++){

 printf("%c ", m[a]);

}
printf("\n");

return 0;}
