#include <stdio.h>

FILE *f;
FILE *g;
char temp;

int main()
{
    f = fopen("C:\\Users\\Victor\\Desktop\\facultate\\CP lab\\tema 10\\file1.txt", "r");

    if(f == NULL)
        printf("Error opening file");


    g = fopen("C:\\Users\\Victor\\Desktop\\facultate\\CP lab\\tema 10\\file1Cpy.txt", "w");

    while(feof(f) == 0)
    {
        temp = fgetc(f);
        if(temp >= 'a' && temp <= 'z')
            temp += 'A' - 'a';

        fputc(temp, g);
    }

    fclose(f);
    fclose(g);
    return 0;
}
