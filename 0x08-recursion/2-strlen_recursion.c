#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlen_recursion - Entry point (_strlen_recursion)
 *
 * @s: _strlen_recursion
 * Return: 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
