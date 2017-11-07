#include <stdio.h>

void interchange(int* nr1, int* nr2);

int main()
{
    int nr1, nr2;

    printf("Input first int: ");
    scanf("%d", &nr1);
    printf("Input second int: ");
    scanf("%d", &nr2);

    interchange(&nr1, &nr2);

    printf("\nAfter interchanging the numbers are %d and %d", nr1, nr2);
}

void interchange(int* nr1, int* nr2)
{
    int aux;

    aux = *nr1;
    *nr1 = *nr2;
    *nr2 = aux;
}
