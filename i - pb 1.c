
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct{
        int field1;
        char field2[50];
        float field3;};

int main()
{


    int nr_elem;
    int i;

    struct mystruct *str;
    str = (struct mystruct*)malloc(nr_elem * sizeof(struct mystruct));

    printf("Input number of elements: ");
    scanf("%i", &nr_elem);

    for(i = 0; i < nr_elem; i++)
    {
        printf("\nInput structure %i: \n\n", i);

        printf("Input first field: ");
        scanf("%i", &str[i].field1);

        printf("Input second field: ");
        scanf("%s", str[i].field2);

        printf("Input third field: ");
        scanf("%f", &str[i].field3);
    }

     for(i = 0; i < nr_elem; i++)
    {
        printf("\n\n\nDisplaying the structure: \n\n", i);

        printf("Field 1: %i \n", str[i].field1);
        printf("Field 2: %s \n", str[i].field2);
        printf("Field 3: %f \n", str[i].field3);

    }

}
