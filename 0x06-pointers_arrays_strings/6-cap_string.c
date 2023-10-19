#include "main.h"
/* betty style doc for function main goes there */
/**
 * cap_string - Entry point (cap_string)
 *
 * @x: cap_string
 * Return: Number
 */
char *cap_string(char *x)
{
int y = 0;
while (x[y])
{
while (!(x[y] >= 'a' && x[y] <= 'z'))
y++;
if (x[y - 1] == ' ' ||
x[y - 1] == '\t' ||
x[y - 1] == '\n' ||
x[y - 1] == ',' ||
x[y - 1] == ';' ||
x[y - 1] == '.' ||
x[y - 1] == '!' ||
x[y - 1] == '?' ||
x[y - 1] == '"' ||
x[y - 1] == '(' ||
x[y - 1] == ')' ||
x[y - 1] == '{' ||
x[y - 1] == '}' ||
y == 0)
x[y] = x[y] - 32;
y++;
}
return (x);
}
