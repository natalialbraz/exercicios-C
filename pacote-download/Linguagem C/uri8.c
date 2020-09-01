#include <stdio.h>
#include <stdio.h>
int main ()
{
int N, C, R, S, cont, Quantia, cobaias, totalc;
float perc, perra, pers;
cont = 1;
totalc = 0;
C = 0;
R = 0;
S = 0;
printf ("Informe quantos testes serão realizados: \n");
scanf ("%d", &N);
while (cont<=N)
{
printf ("Digite a quantidade de cobaias utilizadas neste teste: \n");
scanf ("%d", &Quantia);
printf ("Informe o tipo de cobaia utilizado: 1- coelho 2- rato 3- sapo \n");
scanf ("%d", &cobaias);
if (cobaias==1)
{
C = C+1;
}
else if (cobaias==2)
{
R = R+1;
}
else if (cobaias==3)
{
S = S+1;
}
totalc = totalc+quantia
cont = cont+1;
}
printf ("Total: %d\n", totalc);
printf ("Total de coelhos: %d\n", C);
printf ("Total de ratos: %d\n", R);
printf ("Total de sapos: %d\n", S);
perc = C/totalc*100;
printf ("Percentual de coelhos: %.2f\n", perc);
perra = R/quantia*100;
printf ("Percentual de ratos: %.2f\n", perra);
pers = S/quantia*100;
printf ("Percentual de sapos: %.2f\n", pers);

system ("pause");
return (0);
}
