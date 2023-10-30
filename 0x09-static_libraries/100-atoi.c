#include "main.h"
/* betty style doc for function main goes there */
/**
 * _atoi - Entry point (_atoi)
 *
 * @s: _atoi
 * Return: Number
 */
int _atoi(char *s)
{
int x = 0;
int y = 0;
int sub = -1;
int add = 0;
while (s[x])
{
if (s[x] == 45)
{
sub *= -1;
}
while (s[x] >= 48 && s[x] <= 57)
{
add = 1;
y = (y * 10) + (s[x] - '0');
x++;
}
if (add == 1)
{
break;
}
x++;
}
y *= sub;
return (y);
}
