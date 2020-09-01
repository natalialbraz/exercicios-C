#include <stdio.h>
#include <stdlib.h>
int main ()
{
float nota[30], sup, soma, media, porc;
int i, quant;
sup = 0;
quant = 0;
soma = 0;
for (i=0; i<30; i++)
{
printf ("Digite a nota: \n");
scanf ("%f", &nota[i]);
soma = soma+nota[i];
media = soma/30;
if (nota[i]>9.0)
sup = sup+1;
}
for (i=0; i<30; i++)
{
    if (nota[i]>media)
quant = quant+1;
}
porc = sup/30*100;
printf ("A porcentagem de alunos com nota superior a 9.0 e: %.2f %%\n", porc);

printf ("A quantidade de alunos com nota superior a media da turma e: %i \n", quant);
system ("pause");
return (0);
}
