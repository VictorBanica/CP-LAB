#include <stdio.h>

int main()
{

int a,b;
printf("First number: ");
scanf("%d",&a);
printf("Second number: ");
scanf("%d",&b);

printf("\n\nAddition: %d",a+b);
printf("\nSubtraction: %d",a-b);
printf("\nMultiplication: %d",a*b);
printf("\nInteger division: %d",(int)a/b);
printf("\nReal division: %f",(float)a/b);
printf("\nModulus: %d",a%b);
}
