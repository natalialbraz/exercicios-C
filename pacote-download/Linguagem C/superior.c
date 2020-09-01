#include <stdio.h>
#include <stdlib.h>
int main ()
{
float raio;
float area;
printf ("digite o raio do circulo: \n");
scanf ("%f", &raio);
area = 3.14*raio*raio;

if (area>40)
{
printf ("A area e superior a 40 cm quadrados! \n");
}
system ("pause");
return (0);



}
