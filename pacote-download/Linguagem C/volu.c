#include <stdio.h>
#include <stdlib.h>
float vol (float r)
{
return (4.0/3*3.14*r*r*r);
}
int main ()
{
int i;
float raio, volume;
i=0;
while (i<=29)
{
printf ("Informe o raio da esfera: \n");
scanf ("%f", &raio);
volume= vol(raio);
printf ("O volume vale: %f \n", volume);
i=i+1;
}
system ("pause");
return (0);
}
