#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square - Entry point (print_square)
 *
 * @size: print_square
 * Return: Number
 */
void print_square(int size)
{
int a, b;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
