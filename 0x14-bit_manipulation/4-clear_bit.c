#include "main.h"

/**
* clear_bit - Entry point ()
*
* @n: pointer
* @index: index
* Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int xyz;
unsigned int a;

if (index > 64)
return (-1);
a = index;
for (xyz = 1; a > 0; xyz *= 2, a--);


if ((*n >> index) & 1)
*n -= xyz;

return (1);
}
