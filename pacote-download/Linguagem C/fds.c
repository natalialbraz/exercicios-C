#include <stdio.h>
#include <stdlib.h>
int main ()
{
int dia;
printf ("Informe o dia da semana. 1= domingo, 2= segunda... 7= sabado \n");
scanf ("%i", &dia);

 if (dia == 1 || dia == 7)
 {
 printf ("FIM DE SEMANA \n");
 }
 system ("pause");
 return (0);
 }
