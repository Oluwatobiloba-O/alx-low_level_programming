#include "main.h"
/* betty style doc for function main goes there */
/**
 *  print_sign - Entry point (print_sign)
 * @n: print_sign
 * Return: return 1, 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
