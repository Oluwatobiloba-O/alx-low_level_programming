#include "main.h"

/**
* set_bit - Entry point (set_bit)
*
* @n: pointer
* @index: index
* Return: 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int xyz;

if (index > 64)
return (-1);

for (xyz = 1; index > 0; index--, xyz *= 2)
		;
*n += xyz;

return (1);
}
