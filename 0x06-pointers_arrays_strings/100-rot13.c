#include "main.h"
/* betty style doc for function main goes there */
/**
 * rot13 - Entry point (rot13)
 *
 * @x: rot13
 * Return: Number
 */
char *rot13(char *x)
{
int y;
int z;
char begin[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char mid[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (y = 0; x[y] != '\0'; y++)
{
for (z = 0; begin[z] != '\0'; z++)
{
if (x[y] == begin[z])
{
x[y] = mid[z];
break;
}
}
}
return (x);
}
