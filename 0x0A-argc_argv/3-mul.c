#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
result = x *y;
printf("%d\n", result);
return (0);
}
