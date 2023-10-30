#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2-dimensional array of integers
* @width: alloc_grid
* @height: alloc_grid
*
* Return: Always 0
*/

int **alloc_grid(int width, int height)
{
int **box;
int x;
int y;
if (width <= 0 || height <= 0)
{
return (NULL);
}

box = malloc(height * sizeof(int *));

if (box == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
box[x] = malloc(width * sizeof(int));
if (box[x] == NULL)
{
for (y = 0; y < x; y++)
{
free(box[y]);
}
free(box);
return (NULL);
}
for (y = 0; y < width; y++)
{
box[x][y] = 0;
}
}
return (box);
}
