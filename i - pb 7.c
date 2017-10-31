#include <stdio.h>

int main()
{
    int angle;
    int ok = 0;

    do{
        printf("\nInput the angle value (between 0 and 90): ");
        scanf("%i", &angle);
        if(angle >= 0 && angle <= 90)
        {   ok = 1;
            printf("\nYou have entered a correct value!");}
        else
            printf("\nThe value is out of range. Input another!\n");
    }while(ok == 0);
}
