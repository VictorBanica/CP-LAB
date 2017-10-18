#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int i;
    printf("First and last names: ");
    gets(name);
    for(i=0;i<strlen(name);i++)
    {
        if(i==0)
          name[i]=toupper(name[i]);
           else name[i]=tolower(name[i]);
        if(name[i]==' ')
             {name[i+1]=toupper(name[i+1]);i++;}
    }
    printf("\n%s", name);
}
