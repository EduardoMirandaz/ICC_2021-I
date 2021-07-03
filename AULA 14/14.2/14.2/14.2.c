#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void tiraLetra(char *s, char c, char *pC);

int main(){

    char s[50], c, *pC;
    gets(s);
    scanf("%c", &c);
    pC = s;
    tiraLetra(&s[0], c, *pC);
}

void tiraLetra(char *s, char c, char* pC){
    do{
        pC = strchr(s, c);
        s[*pC] = ' ';
    }
    while(stricmp(s, c) != 0);
    printf(s);
}
