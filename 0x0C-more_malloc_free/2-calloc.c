#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *_calloc - Entry point(_calloc)
* @nmemb: _calloc
* @size: _calloc
* Return: Always 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
if (nmemb == 0 || size == 0)
{
return (NULL);
}

x = malloc(nmemb * size);
if (x == NULL)
{
return (NULL);
}

memset(x, 0, nmemb * size);
return (x);
}
