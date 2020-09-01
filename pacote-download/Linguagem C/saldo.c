#include <stdio.h>
#include <stdlib.h>
int main ()
{
float saldo, credito, debito, novosaldo;
printf ("Informe seu saldo atual: \n");
scanf ("%f", &saldo);
printf ("Informe o valor a ser depositado: \n");
scanf ("%f", &credito);
printf ("Informe o valor do cheque a ser descontado: \n");
scanf ("%f", &debito);
 novosaldo = saldo+credito-debito;

 if (novosaldo>0)
 {
 printf ("Saldo positivo! Valor: %f \n", novosaldo);
 }
 else if (novosaldo<0)
 {
 printf ("Saldo negativo! Valor: %f \n", novosaldo);
 }
 else
 {
 printf ("Sua conta esta zerada! \n");
 }
 system ("pause");
 return (0);

}
