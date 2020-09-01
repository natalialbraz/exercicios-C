#include <stdio.h>
#include <stdlib.h>
int main ()
{
float numero;
printf ("Digite um numero: \n");
scanf ("%d", &numero);
if (numero>= 0 && numero<=25)
{
    printf ("Intervalo (0,25]\n");

}
if (numero>25 && numero<=50)
{
    printf ("Intervalo (25,50]\n");
}
if (numero>50 && numero<=75)
{
    printf ("Intervalo (50,75]\n");
}
if (numero>75 && numero<=100)
{
    printf ("Intervalo (75,100]\n");
}
if (numero<0 || numero>100)
{
    printf ("Fora de intervalo\n");
}

system ("pause");
return (0);

}






printf ("Digite um numero inteiro: \n");
scanf ("%d", &numero)
if (numero>=0 && numero<=25 )
{
intervalo = [25,50];
}
if (numero>=25 && numero<=50)
{
intervalo = [25,50];
}
if (numero>=50 && numero<=7
