#include "main.h"

/**
* binary_to_uint - This converts binary to an unsigned integer
*
* @b: pointer
* Return: integer
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 1, y = 0, z = 0;

if ((!b))
return (0);

while (b[z])
z++;

while (z)
{
if (b[z - 1] != '0' && b[z - 1] != '1')
return (0);

if (b[z - 1] == '1')
y += x;
x *= 2;
z--;
}return (y);
}
