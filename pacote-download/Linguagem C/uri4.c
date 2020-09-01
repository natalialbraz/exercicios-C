#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
float x1, y2, x2, y2, Distancia;
printf ("Digite as primeiras coordenadas: \n");
scanf ("%f", &x1, &y1);
printf ("Digite as segundas coordenadas: \n");
scanf ("%f", &x2, &y2);
Distancia = sqrt((x2-x1*x2-x1)+(y2-y1*y2-y1));
printf ("%.4f\n", Distancia);

return (0);

}
