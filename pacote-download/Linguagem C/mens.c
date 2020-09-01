#include <stdio.h>
#include <stdlib.h>
int main()
{
float altura, imc;
int peso;
printf ("Digite a sua altura: \n");
scanf ("%f", &altura);
printf ("Digite o seu peso: \n");
scanf ("%i", &peso);
imc = (float)peso/(altura*altura);
printf ("Seu IMC e: %.2f\n", imc);

if (imc<18)
{
printf ("Voce esta com magreza grau I \n");
}
else if (imc >18 && imc<22)
{
printf ("Muito bem! Voce esta no seu peso ideal. \n");
}
else if (imc >22)
{
printf ("Cuidado! Voce esta obesa. \n");
}

system ("pause");
return (0);

}
