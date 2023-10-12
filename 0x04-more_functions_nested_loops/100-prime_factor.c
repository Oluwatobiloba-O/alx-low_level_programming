#include <stdio.h>
#include <math.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long a, abs;
long num = 612852475143;
double square = sqrt(num);

for (a = 1; a <= square; a++)
{
if (num % a == 0)
{
abs = num / a;
}
}

printf("%ld\n", abs);

return (0);
}
