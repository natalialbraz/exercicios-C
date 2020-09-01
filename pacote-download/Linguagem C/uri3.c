#include <stdio.h>
#include <stdlib.h>
int main ()
{
int X;
float Y, cmedio;
printf ("Digite a distancia percorrida: \n");
scanf ("%d", &X);
printf ("Digite o combustivel gasto: \n");
scanf ("%f", &Y);
cmedio = X/Y;
printf ("%.3f km/l \n", cmedio);
return (0);
}
