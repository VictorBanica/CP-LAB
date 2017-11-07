#include <stdio.h>

int main()
{
    int i;

    printf("\n Printing using 'for':\n");

    for(i = 2; i <= 60; i += 2)
        printf(" %i", i);

    printf("\n Printing using 'while':\n");

    i = 2;
    while(i <= 60)
    {
        printf(" %i", i);
        i += 2;
    }

    printf("\n Printing using 'do while':\n");

    i = 2;
    do{
        printf(" %i", i);
        i += 2;
    }while(i <= 60);
}
