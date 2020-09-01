#include <stdio.h>
#include <stdlib.h>
int main ()
{
float nota1;
float nota2;
float nota3;
float media;
printf("digite a primeita nota: \n");
scanf ("%f", &nota1);
printf ("digite a segunda nota:");
scanf ("%f", &nota2);
printf ("digite a terceira nota:");
scanf ("%f", &nota3);
media = (nota1+nota2+nota3)/3;

if (media >= 7)
{
printf ("aprovado! \n");
}
system ("pause");
return (0);

}
