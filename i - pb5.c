#include<stdio.h>
#include<math.h>

int inv(int n);

int main()
{
    int a,b;
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);

    printf("\n\nSquare root n1: %f",sqrt(a));
    printf("\nSquare root n2: %f",sqrt(b));
    printf("\nn1 to power n2: %f",pow(a,b));
    printf("\nInverse of n1: %d",inv(a));
    printf("\nInverse of n2: %d",inv(b));

}

int inv(int n)
{
    int x=n;
    int inve=0;
    while(x!=0){
    inve=inve*10+x%10;
    x=x/10;}
    return inve;
}
