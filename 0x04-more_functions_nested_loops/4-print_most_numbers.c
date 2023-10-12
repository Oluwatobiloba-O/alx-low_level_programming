#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - Entry point (print_most_numbers)
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
int a = 0;

for (; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}

_putchar('\n');
}
