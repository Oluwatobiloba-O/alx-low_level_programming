#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - A funtion that creates an array of chars
 *
 * @c: create_array
 * @size: create_array
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
char *xter;
unsigned int x;
if (size == 0)
{
return (NULL);
}

xter = malloc(size * sizeof(char));

if (xter == NULL)
{
return (NULL);
}

for (x = 0; x < size; x++)
{
xter[x] = c;
}

return (xter);
}
