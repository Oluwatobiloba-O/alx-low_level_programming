#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* print_diagsums -  Entry point (print_diagsums)
*
* @a: print_diagsums
* @size: print_diagsums
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int x;
int sum1 = 0;
int sum2 = 0;
for (x = 0; x <= size * size; x = x + size + 1)
{
sum1 = sum1 + *(a + x);
}
for (x = size - 1; x < (size * size - 1); x = x + size - 1)
{
sum2 = sum2 + *(a + x);
}
printf("%d, %d\n", sum1, sum2);
}
