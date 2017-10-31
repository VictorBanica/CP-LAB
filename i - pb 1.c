#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Minimum value of char is: %i", CHAR_MIN);
    printf("\nMaximum value of char is: %i", CHAR_MAX);
    printf("\nMaximum value of unsigned char is: %i \n\n", UCHAR_MAX);

    printf("\nMinimum value of short is: %i", SHRT_MIN);
    printf("\nMaximum value of short is: %i", SHRT_MAX);
    printf("\nMaximum value of unsigned short is: %i \n\n", USHRT_MAX);

    printf("\nMinimum value of int is: %d", INT_MIN);
    printf("\nMaximum value of int is: %d", INT_MAX);
    printf("\nMaximum value of unsigned int is: %u \n\n", UINT_MAX);

    printf("\nMinimum value of long is: %ld", LONG_MIN);
    printf("\nMaximum value of long is: %ld", LONG_MAX);
    printf("\nMaximum value of unsigned long is: %lu \n\n", ULONG_MAX);

}
