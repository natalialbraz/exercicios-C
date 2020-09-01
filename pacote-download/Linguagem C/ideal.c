#include <stdio.h>
#include <stdlib.h>
float pideal (float alt, int se)
{
if (se== 1)
{
pideal = 72.7*alt-58;
}
else if (se==2)
{
pideal = 61.1*alt-44.7;
}
return (pideal);
}
int main ()
{
int i, sexo, soma;
i=0;
soma=0;
float altura, pesoideal;
while (i<=40>)
{
printf ("informe o sexo: \n");
scanf ("%i", &sexo);
printf ("Digite a sua altura: \n");
scanf ("%f", &altura);
pesoideal = pideal(altura, sexo);
soma = soma+pesoideal;
printf ("O peso ideal e: %f \n", pesoideal);
i=i+1;
}
printf ("a soma dos pesos ideais e: %f \n", soma);
system ("pause");
return (0);
}
