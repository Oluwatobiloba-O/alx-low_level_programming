#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*  *_strdup- pointer to a newly allocated space in memory
* @str: *_strdup
*
* Return: Always 0
*/
char *_strdup(char *str)
{
char *new;
if (str == NULL)
{
return (NULL);
}
new = malloc(strlen(str) + 1);
if (new == NULL)
{
return (NULL);
}
strcpy(new, str);
return (new);
}
