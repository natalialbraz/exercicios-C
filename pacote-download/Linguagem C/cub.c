#include <stdio.h>
#include <stdlib.h>
int cubo (int n)
{
int res;
res = n*n*n;
printf ("O cubo e %i \n", res);
return (0);
}
int main ()
{
int i, numero;
i=0;
while (i<=99)
{
printf ("Digite um numero inteiro: \n");
scanf ("%i", &numero);
cubo (numero);
i=i+1;
}
system ("pause");
return (0);
}
