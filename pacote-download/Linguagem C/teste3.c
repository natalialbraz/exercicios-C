#include <stdio.h>
#include <stdlib.h>
int main ()
{
float notas[4][2], medialu[4], mediatu, soma1, soma2;
int i, j;
i=0;
j=0;
soma1=0.0;
soma2= 0.0;
printf ("Insira as 2 notas do aluno 1: \n");

for (i=0; i<4; i++)
{
for (j=0; j<2; j++)
{
scanf ("%f", notas[i][j]);
soma1= soma1+notas[i][j];
}
medialu[i]= soma1/2;
soma1 = 0;
printf ("Insira as 2 notas do aluno: \n", i++);
}
for (i=0; i<4; i++)
{
printf ("A media do aluno %i e: %f\n", i++, medialu[i]);
}
system ("pause");
return (0);
}

