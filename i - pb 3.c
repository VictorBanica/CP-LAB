#include <stdio.h>
#include <string.h>

int main()
{
    char array[500];
    int i;
    int is_space, d1 ,d2 ,d3 ,d4 ,d5, d6, d7, d8, d9, d0, is_other;
    is_space = d1 = d2 = d3 = d4 = d5 = d6 = d7 = d8 = d9 = d0 = is_other = 0; // d1..0 -> counters for each digit

    printf("Input the character array: ");
    gets(array);

    for(i=0; i<strlen(array); i++)
        switch(array[i]){
            case '0': d0++; break;
            case '1': d1++; break;
            case '2': d2++; break;
            case '3': d3++; break;
            case '4': d4++; break;
            case '5': d5++; break;
            case '6': d6++; break;
            case '7': d7++; break;
            case '8': d8++; break;
            case '9': d9++; break;
            case ' ': is_space++; break;
            default: is_other++; break;}

    printf("\nNumber of 0: %i", d0);
    printf("\nNumber of 1: %i", d1);
    printf("\nNumber of 2: %i", d2);
    printf("\nNumber of 3: %i", d3);
    printf("\nNumber of 4: %i", d4);
    printf("\nNumber of 5: %i", d5);
    printf("\nNumber of 6: %i", d6);
    printf("\nNumber of 7: %i", d7);
    printf("\nNumber of 8: %i", d8);
    printf("\nNumber of 9: %i", d9);
    printf("\nNumber of spaces: %i", is_space);
    printf("\nNumber of other characters: %i", is_other);
}
