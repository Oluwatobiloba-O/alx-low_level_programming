#include "main.h"
/* betty style doc for function main goes there */
/**
 * _puts_recursion - Entry point (_puts_recursion)
 *
 * @s: _puts_recursion
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
