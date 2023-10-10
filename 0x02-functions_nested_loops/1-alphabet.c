#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
char al;

al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
}
