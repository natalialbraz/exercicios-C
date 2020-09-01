#include <stdio.h>
#include <stdlib.h>
int main ()
{
float peso;
printf ("Digite o peso da mochila em kg: \n");
scanf ("%f", &peso);

if (peso<5)
{
printf ("Mochila leve! \n");
}
else if (peso>=5 && peso<= 10)
{
printf ("Mochila pesada! \n");
}
else
{
printf ("Mochila muito pesada! \n");
}

system ("pause");
return (0);
}
