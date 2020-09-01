#include <stdio.h>
#include <stdlib.h>
int main ()
{
float nota, media, soma;
int i;
i = 1;
soma = 0;
while (i<=3)
{
printf ("Digite a nota: \n");
scanf ("%f", &nota);
soma = soma+nota;
i = i+1;
}
media = (float)soma/3;
printf ("A media das notas e: %f \n", media);

system ("pause");
return (0);


}
