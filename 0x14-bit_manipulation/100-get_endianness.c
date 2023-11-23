#include "main.h"

/**
* get_endianness - a function to check endianness
*
* Return: 0 or 1
*/
int get_endianness(void)
{
int x;

x = 1;
if (*(char *)&x == 1)
return (1);
else

return (0);
}
