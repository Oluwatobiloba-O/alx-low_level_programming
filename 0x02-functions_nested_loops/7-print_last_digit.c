#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point (print_last_digit)
 * @x: print_last_digit
 * Return: Always 0
 */
int print_last_digit(int x)
{
int n;
n = x % 10;
if (x < 0)
n = -n;
_putchar(n + '0');
return (n);
}
