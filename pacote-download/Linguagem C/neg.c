#include <stdio.h>
#include <stdlib.h>
int main ()
{
int numero;
printf ("Digite um numero inteiro: \n");
scanf ("%i", &numero);

if (numero<0)
{
printf ("Numero negativo! \n");
}
else if (numero=0)
{
printf ("Numero nulo \n!");
}
else
{
printf ("Numero positivo! \n");
}

 system ("pause");
 return (0);


}
