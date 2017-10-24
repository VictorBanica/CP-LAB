#include <stdio.h>

int main()

short get_short();
float get_float();
void prt_char(char n);
void prt_short(short n);
void prt_float(float n);


{
   char character;
   short shortnumber;
   float floatnumber;

   printf("Input a character: ");
   character = getchar();
   prt_char(character);

   shortnumber = getshort();
   prt_short(shortnumber);

   floatnumber = getfloat();
   prt_float(floatnumber);

}

short get_short()
{
    short n;
    printf("\nInput short number: ");
    scanf("%h", n);
    return n;
}

float get_float()
{
    float n;
    printf("\nInput float number: ");
    scanf("%f", n);
    return n;
}

void prt_char(char n)
{
    printf("The character is: %c", n);
}

void prt_short(short n)
{
    printf("The short number is: %h", n);
}

void prt_float(float n)
{
    printf("The float number is: %f", n);
}
