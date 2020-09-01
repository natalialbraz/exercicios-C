#include <stdio.h>
#include <stdlib.h>
int main ()
{
float notas[4][2], alumedia[4], mediatu, soma1, soma2;
int i, j;
soma1 = 0.0;
soma2 = 0.0;
i = 0;
j= 0;
for(i=0; i<4; i++)
{
 for (j=0; j<2; j++)
 {
     printf ("Digite as notas: \n");
     scanf ("%f", &notas[i][j]);
 }
}
 for(i=0; i<4; i++)
{
 for (j=0; j<2; j++)
 {
soma1= soma1+notas[i][j];
 }
alumedia[i] = soma1/2;
soma1 = 0;
     printf ("A media do aluno e: %f \n", alumedia[i]);

}
for(i=0; i<4; i++)
{
 for (j=0; j<2; j++)
 {
 soma2= soma2+notas[i][j];
 }
}
mediatu = soma2/8;
printf ("A media da turma e: %f \n", mediatu);

system ("pause");
return (0);
}
