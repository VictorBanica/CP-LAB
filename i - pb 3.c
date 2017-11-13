#include <stdio.h>

int main()

{
    int matrix[50][50];
    int area1_prod = 1, area2_sum = 0, area3_prod = 1, area4_sum = 0;
    int i, j, nb_of_rows;

    printf("Input number of rows & columns: ");
    scanf("%i", &nb_of_rows);

    for(i = 0; i < nb_of_rows; i++)
        for(j = 0; j < nb_of_rows; j++)
    {
            printf("\nInput matrix [%i][%i]: ",i ,j);
            scanf("%i", &matrix[i][j]);
    }

    for(i = 0; i < nb_of_rows; i++)
        for(j = 0; j < nb_of_rows; j++)
        {
            if(i < j && j < nb_of_rows - i + 1)
                area1_prod = area1_prod * matrix[i][j];
            if(i > j && j < nb_of_rows - i + 1)
                area2_sum = area2_sum + matrix[i][j];
            if(i > j && j > nb_of_rows - i + 1)
                area3_prod = area3_prod * matrix[i][j];
            if(i < j && j > nb_of_rows - i + 1)
                area4_sum = area4_sum + matrix[i][j];
        }

   printf("\nProduct of elements in area 1: %i", area1_prod);
   printf("\nSum of elements in area 2: %i", area2_sum);
   printf("\nProduct of elements in area 3: %i", area3_prod);
   printf("\nSum of elements in area 4: %i", area4_sum);

}
