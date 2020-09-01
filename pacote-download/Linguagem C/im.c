#include <stdio.h>
#include <stdlib.h>
int main ()
{
int i;
i = 1;
while (i>=1 && i<=20)
{
if (i%2!=0)
{
    printf ("%i", i);
}
i = i+1;
}
system ("pause");
return (0);
}



