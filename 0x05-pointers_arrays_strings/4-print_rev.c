#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_rev - Entry point (print_rev)
 *
 * @s: print_rev
 * Return: Number
 */
void print_rev(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
for (x--; x >= 0; x--)
_putchar(s[x]);
_putchar('\n');
}
