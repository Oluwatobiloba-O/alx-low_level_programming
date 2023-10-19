#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strncpy - Entry point (_strncpy)
 *
 * @dest: _strncpy
 * @src: _strncpy
 * @n: _strncpy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; src[x] != '\0' && x < n; x++)
{
dest[x] = src[x];
}

for (x = x; x < n; x++)
{
dest[x] = '\0';
}
return (dest);
}
