#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int x, y = 1, z = 2, sum = 0, tsum = 0;

for (x = 0; x < 49; x++)
{
if ((z % 2 == 0) && (z <= 4000000))
{
tsum = tsum + z;
}
sum = y + z;
y = z;
z = sum;
}
return (0);
}
