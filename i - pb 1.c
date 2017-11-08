#include <stdio.h>

int main()
{
int arr[100];
int count = 0;
int nb_of_elements; // >= 3
int i;
float avg;

printf("Input the number of elements in the array: ");
scanf("%d", &nb_of_elements);

for(i = 0; i < nb_of_elements; i++)
{
    printf("\nInput element number %d: ", i);
    scanf("%d", &arr[i]);
}

for(i = 1; i <= nb_of_elements - 1; i++)
{
    float avg;
    avg = (float)(arr[i-1] + arr[i+1]) / 2;

    if(arr[i] == avg)
        count++;
}

printf("The number of elements equal to the average of their neighbours is: %d", count);

}
