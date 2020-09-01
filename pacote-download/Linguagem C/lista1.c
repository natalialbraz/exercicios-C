#include <stdio.h>
#include <stdlib.h>
int main ()
{
float notas[20], menor;
int i, aprov;
menor= 11.0;
aprov = 0;
for (i=0; i<20; i++)
{
printf ("Digite a sua nota: \n");
scanf ("%f", &notas[i]);
if (notas[i]<menor)
{
menor = notas[i];
}
if (notas[i]>=7.0)
{
aprov = aprov+1;
}
}
printf ("A menor nota da turma e: %.2f \n", menor);
printf ("A quatidade de alunos aprovados e: %i \n", aprov);
system ("pause");
return (0);
}
