#include <stdio.h>

FILE *f;
void display(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Victor\\Desktop\\facultate\\CP lab\\tema 10\\file1.txt", "r");

    if(f == NULL)
        printf("Error opening file");

    while(feof(f) == 0)
    {
        display(f);
    }

    fclose(f);
    return 0;
}

void display(FILE *f)
{
    char c;
    while(c != EOF)
    {
        c=fgetc(f);
        printf("%c", c);
    }
}
