#include <stdio.h>
#include <stdlib.h>
int main ()
{
int a, b, aux;
printf ("Informe o valor de a: \n");
scanf ("%i", &a);
printf ("O valor de a e: %i \n", a);
printf ("Informe o valor de b: \n");
scanf ("%i", &b);
printf ("O valor de b e: %i \n", b);
aux = a;
a = b;
b = aux;
printf ("O novo valor de a e: %i \n", a);
printf ("O novo valor de b e: %i \n", b);

system ("pause");
return (0);

}
