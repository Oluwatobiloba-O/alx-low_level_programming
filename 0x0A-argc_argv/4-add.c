#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int add = 0;
int x;
int y;
int z;
for (x = 1; x < argc; x++)
{
z = strlen(argv[x]);
for (y = 0; y < z; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[x]);
}
printf("%d\n", add);
return (0);
}
