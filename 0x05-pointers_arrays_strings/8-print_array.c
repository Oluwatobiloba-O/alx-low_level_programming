#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_array - Entry point (print_array)
 *
 * @a: print_array
 * @n: print_array
 * Return: Number
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < (n - 1); x++)
{
printf("%d, ", a[x]);
}
if (x == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
