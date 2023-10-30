#include <unistd.h>

/**
 * _putchar - Entry point (_putchar)
 *
 *@c: _putchar
 * Return: 1 if successful, -1 otherwise
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
