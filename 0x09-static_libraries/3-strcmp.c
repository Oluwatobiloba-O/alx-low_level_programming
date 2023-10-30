#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strcmp - Entry point (_strcmp)
 *
 * @s1: _strcmp
 * @s2: _strcmp
 * Return: Number
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
