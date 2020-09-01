#include <stdio.h>
#include <stdlib.h>
int main ()
{
int lado1, lado2, area;
printf ("Digite o o primeiro lado: \n");
scanf ("%i", &lado1);
printf ("Digite o segundo lado: \n");
scanf ("%i", &lado2);
area = lado1*lado2;
printf ("A area e: %i\n", area);

system ("pause");
return (0);
}
