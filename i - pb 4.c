#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[30];
char t[15];

int strend_p( char *s, char *t )
{
    int i;
    int ok = 1;

    s = s + strlen(s) - strlen(t);

    for(i = 0; i < strlen(t); i++)
    {
        if(*s != *t)
        {
            ok = 0;
            break;
        }
        else
        {
            s++;
            t++;
        }
    }

    return ok;
}

int main()
{
    char str1[100], str2[100];

    printf("Input first string: ");
    gets(str1);
    printf("Input second string: ");
    gets(str2);


    printf("\nDoes the second string occur at the end of the first string? (0=NO,1=YES): %i",strend_p(str1, str2));

    return 0;
}


