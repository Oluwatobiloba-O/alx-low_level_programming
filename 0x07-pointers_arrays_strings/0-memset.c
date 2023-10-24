#include "main.h"
/* betty style doc for function main goes there */
/**
 * _memset - Entry point (_memset)
 *
 * @n: bytes of the memory area pointed to by s
 * @s: array
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *mem = s;
while (n--)
{
*mem++ = b;
}
return (s);
}
