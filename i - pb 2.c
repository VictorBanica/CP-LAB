#include <stdio.h>
#include <string.h>

int strlen_array(char array[])
{
    int i = 0;
    while(array[i] != '\0')
        ++i;
    return i;
}

int strlen_pointer(char *strp)
{
    int i = 0;
    while(*strp != '\0')
    {
        ++i;
        ++*strp;
    }
    return i;
}

int main()
{
    char arr[50];
    char aux;

    printf("Input the string: ");
    gets(arr);

    printf("\nString lenght using array: %i", strlen_array(arr));

    printf("\nString lenght using pointers: %i",strlen_array(&arr[0]));
}
