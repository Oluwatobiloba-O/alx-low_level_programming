#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: byte
 * @n: number of memory
 * Return: the new memory
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
{
*p++ = b;
}
return (s);
}
