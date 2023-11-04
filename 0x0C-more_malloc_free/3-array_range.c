#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *array_range - Entry point (array_range)
* @min: minimum array
* @max: maximum array
*
* Return: set
*/
int *array_range(int min, int max)
{
int *set;
int x;
if (min > max)
{
return (NULL);
}

set = malloc((max - min + 1) * sizeof(int));
if (set == NULL)
{
return (NULL);
}

for (x = 0; x <= (max - min); x++)
{
set[x] = min + x;
}

return (set);
}
