/*
#include<stdio.h>

int main(){

int x = 10, *pi, y;
pi = &x;
y = *pi;
printf("%p \n %p \n", x, y);

}
*/

/*#include<stdio.h>

int funcPorValor(int a);
void funcPorRefer(int *b);

int main(){
int x = 0, y = 0;

funcPorValor(y);
printf("%d %d \n", x, y);
funcPorRefer(&x);
printf("%d %d", x, y);


return 0;
}
int funcPorValor(int a){
a = 1;
return a;
}
void funcPorRefer(int *b){
*b = 2;
//por estar mexendo na vari�vel apontada por B, estou alterando o valor de Y; Isso tudo eu fiz para que minha fun��o alterasse o conte�do
//que estava armazenado na mem�ria da vari�vel Y, pois como par�metro eu passei exatamente (&y), que � o endere�o de mem�ria de y.
}
*/


/*
#include<stdio.h>

void funcVetor(int m[]);

int main()
{
    int i, m[5] = {4, 0, 0, 0, 0};
    funcVetor(m);

    for(i = 0; i<5; i++){
        printf("%d ", m[i]);
    }
}
void funcVetor(int *m){
    for( int i = 0; i < 5; i++){
        for ( int j = i; j<5; j++){
            if(m[j] == m[i]){
                m[i] = {};
            }
        }
    }
}
*/

#include<stdio.h>
int main(){

int y, x, *pi;

x = 10
// quando colocamos * na frente da vari�vel na DECLARA��O, apenas estamos mostrando que a vari�vel � do tipo ponteiro
y = &x; // pi recebe o endere�o da vari�vel X
y = pi;  // y recebe o endere�o da vari�vel x
y = *pi;  // y recebe o conte�do que tem  na vari�vel y


}





















