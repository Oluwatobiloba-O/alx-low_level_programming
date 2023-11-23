#include "main.h"

/**
* print_binary - Entry point (Print_binary)
*
* @n: pointer
*/
void print_binary(unsigned long int n)
{
unsigned long int xyz;
int a;

if ((!n))
{
printf("0");
return;
}

for (xyz = n, a = 0; (xyz >>= 1) > 0; a++)
;
for (; a >= 0; a--)
{
if ((n >> a) & 1)
printf("1");
else
printf("0");
}

}
