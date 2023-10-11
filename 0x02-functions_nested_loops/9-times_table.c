#include "main.h"
/* betty style doc for function main goes there */
/**
 * times_table - Entry point (times_table)
 *
 * Return: void
 */
void times_table(void)
{
int x;
int y;
int z;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = (x * y);

if (y == 0)
{
_putchar('0' + z);
}
else if (z <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + z);
}
else if (z > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (z / 10));
_putchar('0' + (z % 10));
}
}
_putchar('\n');
}
}
