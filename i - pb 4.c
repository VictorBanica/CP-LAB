#include  <stdio.h>

void shellsort(int array[], int n);

int main()
{

int number_of_elements;
printf("Input number of elements: ");
scanf("%i", &number_of_elements);
int array[number_of_elements];
int i;

for(i = 0; i < number_of_elements; i++)
{
    printf("Array element number %i: ", i);
    scanf("%i", &array[i]);
}

shellsort(array, number_of_elements);
printf("\n\n\n");

printf("The sorted array is: ");
for(i = 0; i < number_of_elements; i++)
    printf("%i ", array[i]);

}

void shellsort(int array[], int n)
{
    int gap, i;
    for (gap = n/2; gap > 0; gap = gap / 2)
    {
        for (i = gap; i < n; i++)
        {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j = j - gap)
                array[j] = array[j - gap];

            array[j] = temp;
        }
    }
}
