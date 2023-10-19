#include "main.h"
/* betty style doc for function main goes there */
/**
 * reverse_array - Entry point (reverse_array)
 *
 * @a: reverse_array
 * @n: reverse_array
 * Return: Number
 */
void reverse_array(int *a, int n)
{
int x;
int y;

for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
