#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
char nomes[30];
float sala[3], soma, media, menor;
int i, quant;
soma=0;
media=0;
quant=0;
menor=9999.00;
for (i=0; i<3; i++)
{
printf ("Digite o nome do funcionario: \n");
gets(nomes);
printf ("Informe o salario do funcionario: \n");
scanf ("%f", &sala[i]);
_flushall();
soma = soma+sala[i];
media = soma/3;
}
printf ("A media salarial da empresa e: %.2f\n", media);

for (i=0; i<3; i++)
{
if (sala[i]<media)
{
quant = quant+1;
}
}
printf ("A quantidade de funcionarios com salarios inferiores a media salarial da empresa e: %i\n", quant);

for (i=0; i<3; i++)
{
if (sala[i]<menor)
{
menor = sala[i];
printf("O funcionario com menor salario e: %s\n", nomes );
}
}
system ("pause");
return (0);
}
