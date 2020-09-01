#include <stdio.h>
#include <stdlib.h>
int main ()
{
int idade;
printf ("Informe a sua idade: \n");
scanf ("%i", &idade);

if (idade > 18)
{
printf ("Voce e maior de idade! \n");
}
else
{
printf ("Voce e menor de idade! \n");
}
system ("pause");
return (0);
}
