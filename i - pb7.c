#include <stdio.h>

int main()
{
    int i=412;
    int j=100;
    double x=987.654321;

      //(a)

    double a=i/j;                 // i/j = 412/100 = 4.12 - cum i si j sunt de tip int, rezultatul afisat va fi 4
    double b=(double)i/j;       // Tipul impartirii este modificat de la int la double, rezultatul afisat va fi 4.12
    printf("\n a=%f",a);      // La cele doua printf-uri de aici si la cel de la (b) am modificat %d in %f deoarece nu afisa corect
    printf("\n b=%f",b);

      //(b)

    double c=(int)(x*10.0+0.5)/10;  // x*10=9876.54321 | + 0.5 => 9877.04321 | /10 => 987.704321
    printf("\n c=%f",c);            // Cum expresia este convertita la int va fi afisat 987

      //(c)

    i=i/j;   // i/j = 412/100 = 4.12 , dar variabilele sunt int => i = 4
    j=i/j;   // i/j = 4/100 = 0.04 , dar variabilele sunt int => j = 0
    printf("\n i=%d",i);
    printf("\n j=%d",j);

}
