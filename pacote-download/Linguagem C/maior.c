#include <stdio.h>
#include <stdlib.h>
int main ()
{
int numero1, numero2;
printf ("Digite um numero: \n");
scanf ("%i", &numero1);
printf ("Digite outro numero: \n");
scanf ("%i", &numero2);

if (numero1>numero2)
{
printf ("O primeiro numero e maior: %i \n", numero1);
}
else if (numero2>numero1)
{
printf ("O segundo numero e maior: %i \n", numero2);
}
else
{
printf ("Os dois numeros sao iguais! \n");
}

system ("pause");
return (0);
}
