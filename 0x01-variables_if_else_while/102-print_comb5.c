#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a, b;
int w, x, y, z;

for (a = 0; a < 100; a++)
{
w = a / 10;
x = a % 10;

for (b = 0; b < 100; b++)
{
y = b / 10;
z = b % 10;

if (w < y || (w == y && x < z))
{
putchar(w + '0');
putchar(x + '0');
putchar(32);
putchar(y + '0');
putchar(z + '0');

if (!(w == 9 && x == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);

return (0);
}
