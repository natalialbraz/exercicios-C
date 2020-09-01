#include <stdio.h>
#include <stdlib.h>
int main ()
{
int matricula, sexo, status, op, contf, totalm, cbom;
float altura, perc;
op= 1;
cbom= 0;
totalm = 0;
contf= 0;
while (op==1)
{
printf ("Digite a matricula: \n");
scanf ("%i", &matricula);
printf ("Digite o sexo- 1 para masculino e 2 para feminino: \n");
scanf ("%i", &sexo);
printf ("Informe a altura: \n");
scanf ("%f", &altura);
printf ("Informe o status fisico: 1= bom, 2=regular, 3=ruim \n");
scanf ("%i", &status);

if (sexo==2 && altura>1.70)
{
contf = contf+1;
}
if (sexo==1)
{
totalm = totalm+1;
}
if (sexo==1 && status==1)
{
cbom = cbom+1;
}
printf ("Deseja continuar? 1= sim e 2= nao \n");
scanf ("%i", &op);
}
printf ("A quantidade de alunos do sexo feminino com altura superior a 1.70 cm e: %i \n", contf );
perc = (float)cbom/totalm*100;
printf ("A porcentagem de alunos e: %f \n", perc);

system ("pause");
return (0);
}
