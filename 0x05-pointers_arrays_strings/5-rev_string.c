#include "main.h"
/* betty style doc for function main goes there */
/**
 * rev_string - Entry point (rev_string)
 *
 * @s: rev_string
 * Return: Number
 */
void rev_string(char *s)
{
char rev = s[0];
int string = 0;
int x;

while (s[string] != '\0')
string++;
for (x = 0; x < string; x++)
{
string--;
rev = s[x];
s[x] = s[string];
s[string] = rev;
}
}
