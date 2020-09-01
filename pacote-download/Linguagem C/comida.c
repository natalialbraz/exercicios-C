#include <stdio.h>
#include <stdlib.h>
int main ()
{
float pkilo, qtd, vpagar;
printf ("Digite o preço da comida por kilo: \n");
scanf ("%f", &pkilo);
printf ("Digite a quantidade de comida servida em kg: \n");
scanf ("%f", &qtd);
vpagar = pkilo*qtd;
printf ("O valor a pagar sera: %f reais \n", vpagar);
system ("pause");
return (0);
}
