#include <stdio.h>
#include <stdlib.h>

int main ()
{
int num1, num2, maior, soma;
maior = 0;
soma = 0;
do
{
printf ("Digite dois numeros: \n");
scanf ("%d%d", &num1, num2);
if (num1>num2 && num1>maior)
{
maior = num1;
}
else if (num2>num1 && num2>maior)
{
maior = num2;
}
soma = soma+num1+num2;
}
while (num1!=0 && num2!=0);
printf ("o maior numero lido e: %d\n", maior);
printf ("a soma dos numeros lidos e: %d\n", soma);

system ("pause");
return (0);
}
