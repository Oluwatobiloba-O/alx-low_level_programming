#include "main.h"
/* betty style doc for function main goes there */
/**
 * puts_half - Entry point (puts_half)
 *
 * @str: puts_half
 * Return: Number
 */
void puts_half(char *str)
{
int x = 0;
int half, y;

while (str[x] != '\0')
{
x++;
}
half = (x - 1) / 2;
for (y = (half + 1); y < x; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
