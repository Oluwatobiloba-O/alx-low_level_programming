#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal - Entry point (print_diagonal)
 *
 * @n: print-diagonal
 * Return: diagonal lines
 */
void print_diagonal(int n)
{
int a, b;

for (a = 0; a < n; a++)
{
if (n > 1)
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
{
_putchar('\n');
}
}
