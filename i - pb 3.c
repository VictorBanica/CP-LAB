#include <stdio.h>

int addition(int* nr1, int* nr2, int* nr3);
int product(int* nr1, int* nr2, int* nr3);
float average(int* nr1, int* nr2, int* nr3);

int main()
{
    int number1, number2, number3;
    printf("Input the three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    printf("\nThe sum of the three numbers is: %d", addition(&number1, &number2, &number3));
    printf("\nThe product of the three numbers is: %d", product(&number1, &number2, &number3));
    printf("\nThe average of the three numbers is: %f", average(&number1, &number2, &number3));
}

int addition(int* nr1, int* nr2, int* nr3)
{
    int sum = *nr1 + *nr2 + *nr3;
    return sum;
}

int product(int* nr1, int* nr2, int* nr3)
{
    int prod = *nr1 * *nr2 * *nr3;
    return prod;
}

float average(int* nr1, int* nr2, int* nr3)
{
    float avg;
    avg = (float)(*nr1 + *nr2 + *nr3) / 3;
    return avg;
}
