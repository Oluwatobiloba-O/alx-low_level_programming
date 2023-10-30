#include "main.h"
/* betty style doc for function main goes there */
/**
* _strspn -  Entry point (_strspn)
*
* @s: _strspn
* @accept: _strspn
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;
int word = 1;
char *x;
while (*s != '\0' && word)
{
word = 0;
for (x = accept; *x != '\0'; x++)
{
if (*s == *x)
{
word = 1;
num++;
break;
}
}
s++;
}
return (num);
}
