#include <stdio.h>
#include <stdlib.h>

int main ()
{
int N, um, dois, tres, qua, ci, seis, sete, oi, nove, dez;
printf ("Digite um numero inteiro maior que 2 e menor que 100: \n");
scanf ("%d", &N);
um = 1*N;
dois = 2*N;
tres = 3*N;
qua = 4*N;
ci = 5*N;
seis= 6*N;
sete = 7*N;
oi = 8*N;
nove = 9*N;
dez = 10*N;

 printf ("1 x %d = %d\n", N, um);
 printf ("2 x %d = %d\n", N, dois);
 printf ("3 x %d = %d\n", N, tres);
 printf ("4 x %d = %d\n", N, qua);
 printf ("5 x %d = %d\n", N, ci);
 printf ("6 x %d = %d\n", N, seis);
 printf ("7 x %d = %d\n", N, sete);
 printf ("8 x %d = %d\n", N, oi);
 printf ("9 x %d = %d\n", N, nove);
 printf ("10 x %d = %d\n", N, dez);

 system ("pause");
 return (0);
}
