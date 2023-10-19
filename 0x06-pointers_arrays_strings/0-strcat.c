#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strcat - Entry point (_strcat)
 *
 * @dest: _strcat
 * @src: _strcat
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;

while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
