#include <stdio.h>

int binary_search(int left, int right, int val, int array[]);
void sort_array(int array[]);

int main()
{
int number_of_elements;
int i;
int value_to_be_found;

printf("Input the number of elements of the array: ");
scanf("%i", &number_of_elements);
int array[number_of_elements];

int left = 0, right = number_of_elements;

for(i=0; i < number_of_elements ; i++)
{
    printf("Array element number %i: ", i);
    scanf("%i", &array[i]);
}

printf("\nThe value to be searched in the array: ");
scanf("%i", &value_to_be_found);

sort_array(array);

int result = binary_search(left,right,value_to_be_found,array);

if(result == -1)
    printf("The value does not exist in the array.");
else
    printf("The value is found on position %i.", result);

}

int binary_search(int left, int right, int val, int array[]){
    int mid;
    mid = (left + right) / 2;
    if(left > right )
        return -1;
    if(array[mid] < val)
        binary_search(mid + 1, right, val, array);
    else
        if(array[mid] > val)
            binary_search(left, mid - 1, val, array);
        else
            return mid;
}

void sort_array(int array[])
{   int aux, i, n, j;
    n = sizeof(array) / sizeof(array[0]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
            if(array[i] > array[j])
                {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
                }
    }

}
