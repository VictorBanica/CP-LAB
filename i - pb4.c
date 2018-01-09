#include <stdio.h>

void bubbleSort(int arr[],int size);


int main()
{
    int nb_elements, i;
    int x;
    int array[500];
    int ok;

    printf("Input number of elements in the array: ");
    scanf("%i", &nb_elements);

    for(i = 0; i < nb_elements; ++i)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &array[i]);
    }

    bubbleSort(array, nb_elements);

    printf("\n\nSorted array: ");
    for(i = 0; i < nb_elements; ++i)
        printf(" %i", array[i]);

}


void bubbleSort(int arr[],int size)
{
    int temp;
    int i,j;
    for(i = 0; i < size - 1; ++i)
    { for(j = 0; j < size - i - 1; ++j)

        if(arr[j] > arr[j+1])
            {temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;}}

}
