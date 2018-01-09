#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x);


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

    printf("Input element to be searched: ");
    scanf("%i", &x);

    ok = binarySearch(array, 0, nb_elements - 1, x);

    if(ok == 0)
        printf("The element is not present in the array");
    else
        printf("The element is present in the array at position %i", ok);

}


int binarySearch(int arr[], int left, int right, int x)
{
  int mid;

  while (left <= right)
  {
    mid = left + (right - left) / 2;

    if(arr[mid] == x)
        return mid;

    if(arr[mid] < x)
        left = mid + 1;

    if(arr[mid] > x)
        right = mid - 1;
  }

  return -1;
}
