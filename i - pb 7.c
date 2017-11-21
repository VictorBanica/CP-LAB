#include <stdio.h>

void minmax(int a[], int *min, int *max)
{
    int i;

    *min = a[0];
    *max = a[0];

    for(i = 1; i < sizeof(a); i++)
        if(a[i] < *min)
            *min = a[i];
        if(a[i] > *max)
            *max = a[i];
}

int main()
{
    int n, i, min_val, max_val;
    int arr[500];

    printf("Input number of elements in the array: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &arr[i]);
    }

    minmax(arr, &min_val, &max_val);

    printf("\nThe minimum value in the array is: %i", min_val);
    printf("\nThe maximum value in the array is: %i", max_val);
}
