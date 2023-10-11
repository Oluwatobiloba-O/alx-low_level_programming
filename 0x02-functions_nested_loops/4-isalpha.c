#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - Entry point (_isalpha)
 * @c: isalpha
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
return (1);
else
return (0);
}
