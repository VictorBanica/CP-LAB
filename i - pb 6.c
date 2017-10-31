#include <stdio.h>

int main()
{

//(a)

int i = 1;
while (i < 40) {    // i = (1,39) -> vor fi afisate 39 de *
printf("*");
i++;
}

//(b)

i = 1;
do
{
printf ("*");    // i = {1,4,7,10,13,16,19,22,25,28,31,34,37,40} -> vor fi afisate 14 de *
i += 3;
} while (i != 40);

//(c)

for (i = 1; i != 40; i += 2)  // i = {1,3,5 ...}. Vor fi afisate o infinitate de *
printf ("*");

//(d)

int j;
for (i = 1; i <= 40; i += 15) // Pt i = 1 se va afisa un *
for (j = 1; j <= i; j++)      // Pt i = 16 se vor afisa 16 de *
printf ("*");                 // Pt i = 31 se vor afisa 31 de *
                              // La urmatoarea incrementare nu se mai executa nimic pt ca i trece de 40

}
