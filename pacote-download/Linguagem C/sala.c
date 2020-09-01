#include <stdio.h>
#include <stdlib.h>
int main ()
{
int i, sexo, idade, contm, contf, contp;
float renda, sf, mediaf;
contm = 0;
sf = 0;
contf = 0;
i = 1;
while (i<=3)
{
printf ("Informe o sexo- 1 para masculino e 2 para feminino: \n");
scanf ("%i", &sexo);
printf ("Informe  a idade: \n");
scanf ("%i", &idade);
printf ("Digite a renda: \n");
scanf ("%f", &renda);
if (sexo == 1)
{
contm = contm+1;
}
else if (sexo == 2)
{
contf = contf+1;
sf = sf+renda;
}
else if (renda>3500.00 && idade>=23 && idade<=30)
{
contp = contp+1;
}
i = i+1;
}
mediaf = sf/contf;
printf (" A quantidade de homens e: %i \n", contm);
printf ("A quantidade de mulheres e: %i \n", contf);
printf (" A media salarial das mulheres e: %f \n", mediaf);
printf ("A quantidade de pessoas que ganham mais de 3500.00 e: %i \n", contp);
system ("pause");
return (0);
}
