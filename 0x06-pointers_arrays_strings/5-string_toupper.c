#include "main.h"
/* betty style doc for function main goes there */
/**
 * string_toupper - Entry point (string_toupper)
 *
 * @y: string_toupper
 * Return: Number
 */
char *string_toupper(char *y)
{
int x = 0;

while (y[x])
{
if (y[x] >= 'a' && y[x] <= 'z')
y[x] = y[x] - 32;
x++;
}
return (y);
}
