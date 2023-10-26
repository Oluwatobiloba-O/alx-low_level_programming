#include "main.h"
/* betty style doc for function main goes there */
/**
 * issqr - Entry point (issqr)
 *
 * @n1: issqr
 * @n2: issqr
 * Return: 0
 */
int issqr(unsigned long n1, unsigned long n2)
{
if (n1 == n2)
{ return (-1); }
if (n1 * n1 == n2)
{
return (n1);
}
else
{
return (issqr((n1 + 1), n2));
}
return (-1);
}
/**
* _sqrt_recursion - returns the natural square root
* @n: issqr
* Return: 0
**/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n < 0 || n == 2)
return (-1);
if (n == 1)
return (1);
return (issqr(2, n));
}
