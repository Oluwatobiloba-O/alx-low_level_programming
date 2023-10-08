#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int x, y, z;
x = '0';
y = '0';
z = '0';
while (x <= '7')
{
while (y <= '8')
{
while (z <= '9')
{
if ((x < y) && (y < z))
{
putchar(x);
putchar(y);
putchar(z);
if (x != '7' || (x == '7' && y != '8' && z != '9'))
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
z = '0';
}
x++;
y = '0';
}
putchar('\n');
return (0);
}
