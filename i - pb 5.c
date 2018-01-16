#include <stdio.h>

FILE *f;
int LongestLineLenght(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Victor\\Desktop\\facultate\\CP lab\\tema 10\\file1.txt", "r");

    if(f == NULL)
        printf("Error opening file");

    printf("File longest line lenght: %i", LongestLineLenght(f));

    fclose(f);
    return 0;
}

int LongestLineLenght(FILE *f)
{
    int max = -1;
    int lenght = 0;
    char c;

    while(feof(f) == 0)
    {
        c = fgetc(f);
        lenght++;

        if(c != EOF && c!= '\n')
        {
            if(lenght > max)
                max = lenght;

            lenght = 0;
        }
    }
    return max;
}
