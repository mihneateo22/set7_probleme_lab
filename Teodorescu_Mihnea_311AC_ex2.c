#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    unsigned int lungime_sir, i;
    gets(s);
    lungime_sir = strlen(s);
    for(i = 0; i < lungime_sir; i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
