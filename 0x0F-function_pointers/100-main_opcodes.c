#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - Entry point (print_opcodes)
*
* @a: print_opcodes
* @n: print_opcodes
* Return: void
*/
void print_opcodes(char *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%.2hhx", a[x]);
if (x < n - 1)
printf(" ");
}
printf("\n");
}

/**
* main - Entry point (main)
*
* @argc: argument
* @argv: pointers
* Return: always O
*/
int main(int argc, char **argv)
{
int y;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
y = atoi(argv[1]);
if (y < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, y);
return (0);
}
