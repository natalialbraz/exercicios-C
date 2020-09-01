#include <stdio.h>
#include <stdlib.h>
int main ()
{
int i, voto, c1, c2, c3, branco, nulo;
c1=0;
c2=0;
c3=0;
branco=0;
nulo=0;
for (i=1;i<=5;i++)
{
printf ("Escolha seu candidato: 1=c1, 2=c2, 3=c3, 0=branco, 4=nulo \n");
scanf ("%i", &voto);
switch(voto)
{
case 1:
c1= c1+1;
break;
case 2:
c2=c2+1;
break;
case 3:
c3=c3+1;
break;
case 0:
branco=branco+1;
break;
case 4:
nulo=nulo+1;
break;
default:
printf ("numero invalido \n");
}
}
if (c1>c2 && c1>c3)
{
printf ("O candidato 1 venceu! \n");
}
else if (c2>c1 && c2>c3)
{
printf ("O candidato 2 venceu! \n");
}
else
{
printf ("O candidato 3 venceu! \n");
}
printf ("O numero de votos nulos e %i \n", nulo);
printf ("O numero de votos em branco e %i \n", branco);
system ("pause");
return (0);
}
