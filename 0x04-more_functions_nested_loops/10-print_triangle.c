#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_triangle - Entry point (print_triangle)
 *
 * @size: print_triangle
 * Return: Number
 */
void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = size - a; b > 1; b--)
{
_putchar('.');
}

for (c = 0; c <= a; c++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
