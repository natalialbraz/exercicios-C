#include <stdio.h>
#include <stdio.h>
int main ()
{
int NUMBER, horas;
float vphora, SALARY;
printf ("Digite o numero do funcionario: \n");
scanf ("%d", &NUMBER);
printf ("Informe as horas trabalhadas: \n");
scanf ("%d", &horas);
printf ("Digite o valor ganho por hora: \n");
scanf ("%f", &vphora);
SALARY = horas*vphora;
printf ("NUMBER = %d\n", NUMBER);
printf ("SALARY = U$%f\n", SALARY);
return (0);
}
