#include <stdio.h>
#include <stdlib.h>
int main ()
{
float peso, altura, imc;
printf ("Digite o seu peso em kg: \n");
scanf ("%f", &peso);
printf ("Digite a sua altura em metros: \n");
scanf ("%f", &altura);
imc = altura*altura/peso;
printf ("O seu IMC é: %.2f \n", imc);

system ("pause");
return (0);
}
