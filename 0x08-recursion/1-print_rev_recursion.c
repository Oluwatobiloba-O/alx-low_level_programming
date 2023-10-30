#include "main.h"
/* betty style doc for function main goes there */
/**
 * _print_rev_recursion - Entry point (_print_rev_recursion)
 *
 * @s: _print_rev_recursion
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
