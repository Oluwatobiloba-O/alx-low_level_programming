#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';
	char q = 'q';
	char e = 'e';

	while (alphabet <= 'z')
	{
		if (alphabet != q && alphabet != e)
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
