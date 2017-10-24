#include <stdio.h>

int main()

{
    int number;
    int isprime = 1;
    int i;

    printf("Input number: ");
    scanf("%i", &number);

    if (number == 1)
        isprime = 0;
    for(i=2; i<=number/2; i++)
    {
        if(number % i == 0)
        {
            isprime = 0;
            break;
        }
    }


    if(isprime)
        printf("The number is prime!");
    else
        printf("The number is not prime!");

}
