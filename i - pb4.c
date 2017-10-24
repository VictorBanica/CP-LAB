#include <stdio.h>

int main()
{
    int nb_of_grades;
    int grade_sequence[50];
    int i;
    int passed = 1;
    int grades_less_than_8 = 0 ;
    double percentage_of_students_with_grades_less_than_8;

    printf("Input number of grades: ");
    scanf("%i", &nb_of_grades);

    for(i=1 ;i<=nb_of_grades; i++)
    {
        printf("\nInput grade %i: ", i);
        scanf("%i", &grade_sequence[i]);
    }

    for(i=1 ;i<=nb_of_grades; i++)
    {
        if(grade_sequence[i]<5)
            passed=0;
        if(grade_sequence[i]<8)
            grades_less_than_8++;
    }

    percentage_of_students_with_grades_less_than_8 = (double)((grades_less_than_8 / nb_of_grades) * 100);

    if(passed != 0)
        printf("\nAll students have passed");
    else
        printf("\nNot all students have passed");

    printf("\nPercentage of students with grades less than 8 is: %lf", percentage_of_students_with_grades_less_than_8);
}
