#include <stdio.h>
#include <stdlib.h>
int main()
{
float comprimento;
float largura;
float area;
printf ("digite o comprimento do campo: \n");
scanf ("%f", &comprimento);
printf ("digite a largura do campo: \n");
scanf ("%f", &largura);
area= comprimento*largura;
printf ("a area do campo e: %f \n", area);
system("pause");
return (0);

}
