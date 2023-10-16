#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlen - Entry point (_strlen)
 *
 * @s: _strlen
 * Return: Number
 */
int _strlen(char *s)
{
int shop = 0;

while (*s != '\0')
{
shop++;
s++;
}
return (shop);
}
