#include <stdio.h>
#include <stdlib.h>
int main ()
{
int x;
int y;
int area;
printf ("informe um lado em metros: \n");
scanf ("%i", &x);
printf ("informe o outro lado em metros: \n");
scanf ("%i", &y);
area = x*y;

if (area> 360)
{
printf ("Area superior a 360 metros! \n");
}
system ("pause");
return (0);


}
