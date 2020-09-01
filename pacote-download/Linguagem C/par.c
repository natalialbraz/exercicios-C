#include <stdio.h>
#include <stdlib.h>
int main ()
{
int numero;
printf ("Digite um numero inteiro e positivo: \n");
scanf ("%i", &numero);

if (numero%2 == 0)
printf ("O numero e par! \n");
else
printf ("O numero e imapar! \n");

system ("pause");
return (0);
}
