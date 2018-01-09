#include <stdio.h>

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

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

    mergeSort(array, 0, nb_elements - 1);

    printf("\n\nSorted array:");
     for(i = 0; i < nb_elements; ++i)
    {
        printf(" %i", array[i]);
    }

}

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int arrsize1 = mid - left + 1;
    int arrsize2 =  right - mid;

    int L[arrsize1], R[arrsize2];

    for (i = 0; i < arrsize1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < arrsize2; j++)
        R[j] = arr[mid + 1 + j];

    i = j = 0;
    k = left;
    while (i < arrsize1 && j < arrsize2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < arrsize1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < arrsize2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
