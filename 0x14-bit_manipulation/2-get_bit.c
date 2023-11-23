#include "main.h"

/**
* get_bit - Entry point ()
*
* @n: pointer
* @index: index
* Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int xyz;

if (index > 64)
return (-1);

xyz = n >> index;

return (xyz & 1);
}
