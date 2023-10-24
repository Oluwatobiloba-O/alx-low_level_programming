#include "main.h"
/* betty style doc for function main goes there */
/**
* _memcpy -  Entry point (_memcpy)
*
* @n: bytes from memory area to copy
* @src: array
* @dest: destination
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_mem = dest;
char *src_mem = src;
unsigned int x;

for (x = 0; x < n; x++)
{
*dest_mem++ = *src_mem++;
}

return (dest);
}
