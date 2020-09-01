#include <stdio.h>
#include <stdlib.h>
int main ()
{
float saldo, credito, debito, saldoatual;
printf ("Digite seu saldo: \n");
scanf ("%f", &saldo);
printf ("Digite o valor a ser depositado: \n");
scanf ("%f", &credito);
printf ("Digite o valor do cheque a ser descontado: \n");
scanf ("%f", &debito);
saldoatual =(saldo+credito)-debito;

if (saldoatual>0)
{
printf ("Saldo positivo igual a %f \n");
}
else if (saldoatual<0)
{
printf ("Saldo negativo igual a %f \n");
}
else if (saldo=0)
{
printf ("Sua conta esta zerada!");
}

system ("pause");
return (0);
}
