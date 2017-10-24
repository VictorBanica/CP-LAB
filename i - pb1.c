#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    double radians;
    double degree;
    int intdegree, minute, second;

    printf("Number of radians: ");
    scanf("%lf", &radians);

    degree = radians * (180 / PI);

    intdegree = (int)degree;
    minute = (int)( (degree - intdegree ) * 60);
    second = (int)( (degree - intdegree - minute / 60) * 3600);

    printf("\nConversion to degrees,minutes,seconds: %i* %i' %i'' ", intdegree, minute, second);
}
