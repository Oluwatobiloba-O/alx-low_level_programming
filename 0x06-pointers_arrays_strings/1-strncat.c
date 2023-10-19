#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strncat - Entry point (_strncat)
 *
 * @dest: _strncat
 * @src: _strncat
 * @n: _strncat
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;

while (dest[x] != '\0')
{
x++;
}
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
