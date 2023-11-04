#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* *validate_input - multiplies two positive numbers
* @num: user input
*
* Return: Always 0.
*/

int validate_input(char *num)
{
int x = 0;
while (num[x] != '\0')
{
if (!isdigit(num[x]))
{
return (0);
}
x++;
}
return (1);
}

/**
* main - run program
* @argc: argc
* @argv: argv
*
* Return: 0
*/

int main(int argc, char **argv)
{
int num1;
int num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!validate_input(argv[1]) || !validate_input(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
