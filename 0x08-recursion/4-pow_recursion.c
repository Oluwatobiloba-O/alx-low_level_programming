#include "main.h"
/* betty style doc for function main goes there */
/**
 * _pow_recursion - Entry point (_pow_recursion)
 *
 * @x: _pow_recursion
 * @y: _pow_recursion
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
