#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
int y;
if (argc != 2)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);
if (x < 0)
{
printf("0\n");
return (0);
}

y = 0;

y += x / 25;
x %= 25;

y += x / 10;
x %= 10;

y += x / 5;
x %= 5;

y += x / 2;
x %= 2;

y += x;

printf("%d\n", y);
return (0);
}
