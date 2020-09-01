#include <stdio.h>
#include <stdlib.h>
int main ()
{
int N, fat, i;
fat= 1;
i = 1;
printf ("Digite um valor para N: \n");
scanf ("%d", &N);
while (i<=N)
{
fat = fat*i;
i = i+1;
}
printf ("%d\n", fat);

system ("pause");
return (0);
}
