#include "main.h"
/* betty style doc for function main goes there */
/**
 * leet - Entry point (leet)
 *
 * @n: leet
 * Return: Number
 */
char *leet(char *n)
{
int x;
int y;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (x = 0; n[x] != '\0'; x++)
{
for (y = 0; a[y] != '\0'; y++)
{
if (n[x] == a[y])
{
n[x] = b[y];
}
}
}
return (n);
}
