#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* *malloc_checked - allocates memory using malloc
*
* @b: malloc_checked
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == 0)
{
exit(98);
}
return (ptr);
}
