#include <stdio.h>
#include <stdlib.h>
int main ()
{
int menu;
printf ("Escolha uma das seguintes opcoes: 1-Biscoito, 2-Chocolate, 3-Pizza, 4-Refrigerante, 5-Água Mineral, 6-Vinho \n");
scanf ("%f", &menu);
switch (menu)
{
case 1:
printf ("O preco e: R$2,50 \n");
printf ("Existem 50 unidades em estoque! \n");
break;
case 2:
printf ("O preco e: R$4,20 \n");
printf ("Existem 30 unidades em estoque! \n");
break;
case 3:
printf ("O preco e: R$25,90 \n");
printf ("Existem 80 unidades em estoque! \n");
break;
case 4:
printf ("O preco e: R$3,00 \n");
printf ("Existem 60 unidades em estoque! \n");
break;
case 5:
printf ("O preco e: R$1,80 \n");
printf ("Existem 100 unidades em estoque! \n");
break;
case 6:
printf ("O preco e: R$23,10 \n");
printf ("Existem 19 unidades em estoque! \n");
break;
default:
printf ("Número inválido! \n");
}
system ("pause");
return (0);
}
