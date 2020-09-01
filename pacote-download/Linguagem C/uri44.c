#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
float x1, y1, x2, y2, Distancia;

printf ("Digite a primeira coordenada do 1 ponto: \n");
scanf ("%f", &x1);
printf ("Digite a segunda coordenada do 1 ponto: \n");
scanf ("%f", &y1);
printf ("Digite a primeira coordenada do 2 ponto: \n");
scanf ("%f", &x2);
printf ("Digite a segunda coordenada do 2 ponto: \n");
scanf ("%f", &y2);
Distancia = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
printf ("%.4f\n", Distancia);

return (0);

}
