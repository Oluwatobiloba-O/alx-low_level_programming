#include "main.h"
/* betty style doc for function main goes there */
/**
 * puts2 - Entry point (puts2)
 *
 * @str: puts2
 * Return: Number
 */
void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
