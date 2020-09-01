#include <stdio.h>
#include <stdlib.h>
int main ()
{
int tipo;
float preco;
float novopreco;
printf ("Informe o tipo do automovel. 1=Popular, 2= Nao popular: \n");
scanf ("%i", &tipo);
printf ("Informe o preco do automovel: \n");
scanf ("%f", &preco);

if (tipo= 1)
{
novopreco = preco*5/100;
}
else
{
novopreco = preco*10/100;
}

system ("pause");
return (0);
}
