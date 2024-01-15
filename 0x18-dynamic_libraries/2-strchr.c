#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
char *p = s;

for (; *p != '\0'; p++)
{
if (*p == c)
return (p);
}
if (*p == c)
return (p);
return (0);
}
