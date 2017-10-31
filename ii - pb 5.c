#include <stdio.h>


// Let An represent the sum of the powers of three, up to 3n. That is,
// An = 1 + 3 + 9 + 27 + ... + 3n.
// (a) Complete the following function that requires an integer parameter for the value of n and returns the
//value of the sum as defined above using a loop to compute the sum. You may assume n >= 0.
int computeSum(int n)
{
int sum = 0;
int nextValue = 1;
int i;
for (i = 0; i < n; i++) {
sum += nextValue;
nextValue *= 3;
}
return sum;
}

//(b) Show how to call this method to print out the sum 1 + 3 + 9 + 27 + 81.

int main()
{

int number_of_terms;
printf("Input number of terms: ");
scanf("%i", &number_of_terms);

printf("\n\nThe sum is %i!", computeSum(number_of_terms));

//(b) For 5 terms the sum will be 121.
}
