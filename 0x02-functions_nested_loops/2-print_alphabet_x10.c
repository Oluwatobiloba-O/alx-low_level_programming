#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Entry point (print_alphabet_x10)
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char s;
int t;

for (t = 0; t < 10; t++)
{
for (s = 'a'; s <= 'z'; s++)
{
_putchar(s);
}
_putchar('\n');
}
}
