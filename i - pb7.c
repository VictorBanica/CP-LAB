#include <stdio.h>

void shellSort(int arr[], int arrsize);

int main()
{
    int nb_elements, array[500], i;

    printf("Input number of elements in the array: ");
    scanf("%i", &nb_elements);

    for(i = 0; i < nb_elements; ++i)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &array[i]);
    }

    shellSort(array, nb_elements);

    printf("\n\nSorted array:");
     for(i = 0; i < nb_elements; ++i)
    {
        printf(" %i", array[i]);
    }

}


void shellSort(int arr[], int arrsize)
{
    int gap, i, j, temp;
    for (gap = arrsize / 2; gap > 0; gap = gap / 2)
    {
        for (i = gap; i < arrsize; ++i)
        {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j = j - gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}
















