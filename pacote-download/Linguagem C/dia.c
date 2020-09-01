#include <stdio.h>
#include <stdlib.h>
int main ()
{
int dia;
printf ("Informe o dia da semana. 1=Domingo, 2=Segunda, ..., 7=Sabado: \n");
scanf ("%i", &dia);

if (dia=1 || dia=7)
{
printf ("Hoje e sabado ou domingo! \n");
}

system ("pause");
return (0);


}
