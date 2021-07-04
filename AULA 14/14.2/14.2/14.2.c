#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void tiraLetra(char *s, char c, char *pC);

int main(){

    char s[50], c, *pC;
    gets(s);
    scanf("%c", &c);
    //printf(s);
    //printf("%c", c);
    tiraLetra(&s[0], c, &pC);
    return 0;
}
void tiraLetra(char *s, char c, char *pC)
{
    for(int a = 0; a < strlen(s); a++){
        if(s[a] == c){
            pC = strchr(s, c);
            *pC = ' ';
        }
    }
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' ')
        {
            printf("%c", s[i]);
        }
    }
}
