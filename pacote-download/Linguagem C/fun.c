#include <stdio.h>
#include <stdlib.h>
int absoluto (int n)
{
    int res;
    if (n>0)
    {
        res = n;
    }
    else
        res = n*-1;
printf ("O absoluto do numero e %i \n", res);
return (0);
}
int main ()
{
int numero, i;
i = 0;
while (i<=29)
{
printf ("Digite um numero inteiro: \n");
scanf ("%i", &numero);
absoluto (numero);
i=i+1;
}
system ("pause");
return (0);
}
