#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point (keygen)
 *
 * Return: Always 0
 */
int main(void)
{
int x[100];
int y;
int z;
int pwd;

pwd = 0;

srand(time(NULL));

for (y = 0; y < 100; y++)
{
x[y] = rand() % 78;
pwd += (x[y] + '0');
putchar(x[y] + '0');
if ((2772 - pwd) - '0' < 78)
{
z = 2772 - pwd - '0';
pwd += z;
putchar(z + '0');
break;
}
putchar('\n');
}
return (0);
}
