#include <stdio.h>
#include <string.h>

int main()
{

char firstname[20];
char lastname[20];

printf("Enter first name: "); gets(firstname);
printf("Enter last name: "); gets(lastname);

printf("\n\n");

printf("First name: %s",firstname);
printf("\nLast name: %s",lastname);


}
