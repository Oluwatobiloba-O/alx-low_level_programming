#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_number - Entry point (print_number)
 *
 * @n: print_number
 * Return: Number
 */
void print_number(int n)
{
unsigned int x = n;

if (n < 0)
{
_putchar(45);
x = -x;
}
if (x / 10)
{
print_number(x / 10);
}
_putchar(x % 10 + '0');
}
