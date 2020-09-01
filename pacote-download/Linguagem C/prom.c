#include <stdio.h>
#include <stdlib.h>
int main ()
{
float tv, dvd, soma;
printf ("Digite o valor do dvd: \n");
scanf ("%f", &dvd);
printf ("Digite o valor da tv: \n");
scanf ("%f", &tv);
soma = tv+dvd;

if (soma < 1300)
{
printf ("Promocao! \n");
}
else
{
printf ("Sem promocao! \n");
}
system ("pause");
return (0);
}
