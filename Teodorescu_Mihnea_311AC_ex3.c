#include<stdio.h>
#include<string.h>

int main()
{
    char nume1[100], nume2[100];
    unsigned int varsta1, varsta2;

    printf("nume1 = ");
    gets(nume1);
    printf("varsta1 = ");
    scanf("%u", &varsta1);
    getchar();
    printf("nume2 = ");
    gets(nume2);
    printf("varsta2 = ");
    scanf("%u", &varsta2);

    printf("nume1 = %s\n", nume1);
    printf("nume2 = %s\n", nume2);
    printf("varsta1 = %u\n", varsta1);
    printf("varsta2 = %u\n", varsta2);


    if(strcmp(nume1, nume2) != 0)
    {
        if(varsta1 < varsta2)
        {
            printf("%s", nume1);
            return 0;
        }

        if(varsta1 > varsta2)
        {
            printf("%s", nume2);
            return 1;
        }

        if(varsta1 == varsta2);
        {
            printf("%s %s", nume1, nume2);
            return 2;
        }

    }
    return 3;
}
