#include <stdio.h>
#include <stdlib.h>

int main ()
{
float salario, vpagar;
printf ("Informe seu salario: \n");
scanf ("%.2f", &salario);

if (salario>=0.00 && salario<= 2000.00)
{
printf ("Isento\n");
}
else if (salario>2000.00 && salario<=3000.00)
{
vpagar = (salario-2000.00)*8/100;
printf ("R$ %.2f\n", vpagar);
}
else if (salario>3000.00 && salario<=4500.00)
{
vpagar = (salario-2000.00)*18/100;
printf ("R$ %.2f\n", vpagar);
}
else if (salario>4500.00)
{
vpagar = (salario-2000.00)*28/100;
printf ("R$ %.2f\n", vpagar);
}
system ("pause");
return (0);
}
