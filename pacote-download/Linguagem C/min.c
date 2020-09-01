#include <stdio.h>
#include <stdlib.h>
int main ()
{
float salariom, srecebido, qtdsala;
printf ("Digite o valor do salario minimo: \n");
scanf ("%f", &salariom);
printf ("Digite quantos reais recebe: \n");
scanf ("%f", &srecebido);
qtdsala = srecebido/salariom;
printf ("A pessoa recebe %f salarios minimos. \n", qtdsala);

system ("pause");
return (0);
}
