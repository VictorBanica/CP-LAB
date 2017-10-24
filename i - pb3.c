#include <stdio.h>

int main()
{
    int nb_of_elements;
    int element_sequence[500];
    int min = 32000;
    int max = -32000;
    int i;

    printf("Input number of elements: ");
    scanf("%i", &nb_of_elements);

    for(i=1; i<=nb_of_elements; i++)
    {
        printf("\nElement number %i:", i);
        scanf("%i", &element_sequence[i]);
    }

    for(i=1; i<=nb_of_elements; i++)
    {
        if(element_sequence[i] <= min)
            min=element_sequence[i];

        if(element_sequence[i] >= max)
            max=element_sequence[i];
    }

    printf("\nLargest element is: %i", max);
    printf("\nSmallest element is: %i", min);
}
