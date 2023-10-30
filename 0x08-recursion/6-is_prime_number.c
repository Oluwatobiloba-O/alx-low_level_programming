#include "main.h"
/* betty style doc for function main goes there */
/**
 * is_prime_helper - Entry point (is_prime_helper)
 *
 * @n: is_prime_helper
 * @x: is_prime_helper
 * Return: 0
 */
int is_prime_helper(int n, int x)
{
if (n <= 1)
{
return (0);
}
else if (x * x > n)
{
return (1);
}
else if (n % x == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, x + 1));
}
}

/**
* is_prime_number - returns 1 if the input integer is a prime
* @n: is_prime_number
* Return: 1
**/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
