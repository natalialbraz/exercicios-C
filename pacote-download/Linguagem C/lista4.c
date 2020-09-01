#include <stdio.h>
#include <stdlib.h>
int main ()
{
int vendas [4][5], vendida[5], i, j, total, vbrasil, menor;
i= 0;
j= 0;
total = 0;
vbrasil = 0;
menor = 100000;
for (j=0; j<5; j++)
{
for (i=0; i<4; i++)
{
printf ("Digite a quantidade de notebooks vendidos: \n");
scanf ("%i", &vendas[i][j]);
}
}
for (j=0; j<5; j++)
{
for (i=0; i<4; i++)
{
vbrasil = vbrasil+vendas[i][j];
}
}
printf ("A quantidade total vendida no Brasil foi: %i\n", vbrasil);
for (j=0; j<5; j++)
{
for (i=0; i<4; i++)
{
 total = total+vendas[i][j];
}
vendida[j]= total;
total = 0;
printf ("O total de vendas na regiao e: %i\n", vendida[j]);
}
for (j=0; j<5; j++)
{
for (i=0; i<4; i++)
{
  if (vendas[i][j]<menor)
  {
      menor = vendas[i][j];
      printf ("A menor venda foi: %i\n", vendas[i][j]);
  }
}
}
system ("pause");
return (0);
}
