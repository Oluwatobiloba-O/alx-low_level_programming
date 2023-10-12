#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - Entry point (print_line)
 *
 * @n: print_line
 * Return: Number
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}

_putchar('\n');
}
}
