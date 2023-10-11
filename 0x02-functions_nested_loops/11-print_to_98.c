#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_to_98 - Entry point (print_to_98)
 *
 * @x: print_to_98
 * Return: Number
 */

void print_to_98(int x)
{
while (x < 98)
{
printf("%d, ", x);
x++;
}

while (x > 98)
{
printf("%d, ", x);
x--;
}

if (x == 98)
printf("%d", x);

printf("\n");
}
