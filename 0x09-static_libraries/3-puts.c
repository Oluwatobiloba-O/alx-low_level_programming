#include "main.h"
/* betty style doc for function main goes there */
/**
 * _puts - Entry point (_puts)
 *
 * @str: _puts str
 * Return: Always 0
 */
void _puts(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
