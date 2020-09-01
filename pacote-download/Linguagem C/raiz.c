#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI= 3.1416
int main ()
{
float num;
printf ("raiz quadrada \n");
printf ("Digite um numero: \n");
scanf ("%f", &num);
printf ("Raiz quadrada de %.2f= %.2f \n", num, sqrt(num));
system ("pause");
return (0);
}
