#include <stdio.h>
#define LARGEST 10000000000
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int ab1 = 0, ac1 = 1, ab2 = 0, ac2 = 2;
unsigned long int abs1, abs2, abs3;
int count;

printf("%ld, %ld, ", ac1, ac2);
for (count = 2; count < 98; count++)
{
if (ac1 + ac2 > LARGEST || ab2 > 0 || ab1 > 0)
{
abs1 = (ac1 + ac2) / LARGEST;
abs2 = (ac1 + ac2) % LARGEST;
abs3 = ab1 + ab2 + abs1;
ab1 = ab2, ab2 = abs3;
ac1 = ac2, ac2 = abs2;
printf("%ld%010lu", ab2, ac2);
}
else
{
abs2 = ac1 + ac2;
ac1 = ac2, ac2 = abs2;
printf("%ld", ac2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
