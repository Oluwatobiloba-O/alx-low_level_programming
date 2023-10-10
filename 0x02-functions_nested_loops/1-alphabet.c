#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet - Entry point (print_alphabet)
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
char s;

s = 'a';
while (s <= 'z')
{
_putchar(s);
s++;
}
_putchar('\n');
}
