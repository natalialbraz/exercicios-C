#include <stdio.h>
#include <stdlib.h>
int main ()
{
float raio;
float volume;
printf ("digite o raio da esfera: \n");
scanf ("%f", &raio);
volume = 4/3*3.14*(raio*raio*raio);
printf ("o volume da esfera e: %f \n", volume);

system ("pause");
return (0);

}
