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
//por estar mexendo na variável apontada por B, estou alterando o valor de Y; Isso tudo eu fiz para que minha função alterasse o conteúdo
//que estava armazenado na memória da variável Y, pois como parâmetro eu passei exatamente (&y), que é o endereço de memória de y.
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
// quando colocamos * na frente da variável na DECLARAÇÃO, apenas estamos mostrando que a variável é do tipo ponteiro
y = &x; // pi recebe o endereço da variável X
y = pi;  // y recebe o endereço da variável x
y = *pi;  // y recebe o conteúdo que tem  na variável y


}





















