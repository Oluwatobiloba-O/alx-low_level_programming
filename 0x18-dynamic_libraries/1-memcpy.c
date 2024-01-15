#include "main.h"

/**
 * _memcpy - copies from the src to the dest
 * @dest: destination
 * @src: src
 * @n: num
 * Return: the altered dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;

while (n--)
{
*p++ = *src++;
}
return (dest);
}
