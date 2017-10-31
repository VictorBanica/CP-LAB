// (a) Write a C code fragment that computes the value of the sum of the first n squares using a loop. The sum should be stored as an int.
// (b) What is the largest value of n that gives you a correct answer on a computer?

#include <stdio.h>

int main()
{
    int number_of_terms, i;
    int sum = 0;
    int next_value = 1;

    printf("Input number of terms: ");
    scanf("%i", &number_of_terms);

    for(i=0; i < number_of_terms; i++)
    {
        sum = sum + next_value;
        next_value = next_value * 2;
    }

    printf("The sum is: %i", sum);

//(b) For n = 31 the value is correct. Any n above that will print out -1, because it will go over the range of int.
}
