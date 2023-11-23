#include "main.h"

/**
* flip_bits - Entry point (flip bits)
*
* @n: pointer
* @m: number
* Return: a
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xyz;
int a;

xyz = n ^ m;
a = 0;

while (xyz)
{
a++;
xyz &= (xyz - 1);
}

return (a);
}
