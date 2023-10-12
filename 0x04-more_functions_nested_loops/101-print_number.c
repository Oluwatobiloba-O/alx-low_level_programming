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
unsigned int a = n;

if (n < 0)
{
_putchar(45);
a = -a;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar(a % 10 + '0');
}
