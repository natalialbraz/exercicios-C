#include <stdio.h>
#include <stdlib.h>
int main ()
{
float salario, maior, soma, conts;
int op, sexo, departamento;
op= 1;
maior=0;
soma= 0;
conts= 0;
media = 0;
while (op==1)
{
printf ("Digite o sexo (1- masc e 2- fem): \n");
scanf ("%i", &sexo);
printf ("Informe o salario: \n");
scanf ("%f", &salrio);
printf ("informe o departamento (1-rh 2-financas e 3-manutencao) \n");
scanf ("%i", &departamento);
if (departamento==1 && salario>maior)
{
maior = salario;
}
if (departamento==3 && sexo==2)
{
soma= soma+salario;
conts= conts+1;
}
printf ("Deseja continuar? \n");
scanf ("%i", &op);
}
media = media+(soma/conts);
printf ("O maior salario e: %f \n", maior);
printf ("A media salaria e: %f \n", media);
system ("pause");
return (0);
}
