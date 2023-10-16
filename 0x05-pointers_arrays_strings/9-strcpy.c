#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * *_strcpy - Entry point (*_strcpy)
 *
 * @dest: *_strcpy
 * @src: *_strcpy
 * Return: Number
 */
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x] = '\0';
return (dest);
}
