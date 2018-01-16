#include <stdio.h>

FILE *f;

int main()
{
    f = fopen("C:\\Users\\Victor\\Desktop\\facultate\\CP lab\\tema 10\\data.txt", "r");

    if(f == NULL)
        printf("Error opening file");

    int array[50];
    char c;
    int avg;
    int s = 0;
    int nr = 0;
    int cnt = 0;
    int i;
    int temp;

    while(feof(f) == 0)
    {
        c = fgetc(f);
        if(c != '\n' && c != EOF)
        {
            temp = (int)c;
            array[nr] = temp;
            s = s + temp;
            ++nr;}
    }

    avg = s / nr;

    for(i = 0; i < nr; ++i)
        if(array[i] > avg)
            ++cnt;

    printf("Numbers bigger than average: %i", cnt);

    fclose(f);
    return 0;
}
