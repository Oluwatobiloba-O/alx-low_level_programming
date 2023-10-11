#include "main.h"
#include <stdio.h>
#include <math.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point (main function)
 *
 * Return: Always 0
 */
int main(void)
{
int x = 1;
int total = 0;

while (x < 1024)
{
if (x % 3 == 0)
total += x;
else if (x % 5 == 0)
total += x;

x++;
}
printf("%d\n", total);

return (0);
}
