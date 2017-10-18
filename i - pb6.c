#include <stdio.h>

int main()
{
    int n,x,i;
    int sum =0;
    printf("Total number of terms to be summed: ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        printf("Term number %d: ",i);
        scanf("%d",&x);
        sum=sum+x;
    }

    printf("\n\nThe sum is %d: ",sum);

}
