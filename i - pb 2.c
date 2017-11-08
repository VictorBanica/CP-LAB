#include <stdio.h>

int main()
{
int arr[100];
int ok = 0;
int nb_of_elements; // >= 3
int i;
int ratio;
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
        {ok = 1;
        break;}
}

if(ok == 1)
{
    ratio = arr[1] - arr[0];
    printf("\nThe elements are in aritmethical progression with the ratio %d", ratio);
}
else
    printf("\nThe elements aren''t in aritmethical progression");

}
