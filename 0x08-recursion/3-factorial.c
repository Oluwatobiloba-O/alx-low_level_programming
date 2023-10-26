#include "main.h"
/* betty style doc for function main goes there */
/**
 * factorial - Entry point (factorial)
 *
 * @n: factorial
 * Return: 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
