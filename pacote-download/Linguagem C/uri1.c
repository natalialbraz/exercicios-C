#include <stdio.h>
#include <stdlib.h>
int main ()
{
int a, b, produto;
printf ("Digite um numero inteiro: \n");
scanf ("%d", &a);
printf ("Digite outro numero inteiro: \n");
scanf ("%d", &b);
produto = a*b;
printf ("PROD = %d \n", produto);

system ("pause");
return (0);
}
