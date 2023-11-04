#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *_realloc - Entry point (_realloc)
* @ptr: _realloc
* @old_size: _realloc
* @new_size: _realloc
*
* Return: Always 0.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *Ptr2;
if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

Ptr2 = malloc(new_size);

if (Ptr2 != NULL)
{
memcpy(Ptr2, ptr, (new_size < old_size) ? new_size : old_size);
free(ptr);
}
return (Ptr2);
}
