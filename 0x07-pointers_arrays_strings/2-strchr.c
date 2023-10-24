#include "main.h"
/* betty style doc for function main goes there */
/**
* _strchr -  Entry point (_strchr)
*
* @s: _strchr
* @c: _strchr
* Return: pointer
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (0);
}
