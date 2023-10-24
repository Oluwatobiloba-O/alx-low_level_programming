#include "main.h"
/* betty style doc for function main goes there */
/**
* _strpbrk -  Entry point (_strpbrk)
*
* @s: bytes from memory area to copy
* @accept: destination
* Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
char *x;
while (*s)
{
for (x = accept; *x != '\0'; x++)
{
if (*s == *x)
{
return (s);
}
}
s++;
}
return (0);
}
