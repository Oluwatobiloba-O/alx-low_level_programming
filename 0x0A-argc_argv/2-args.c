#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
