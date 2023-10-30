#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* *str_concat - a function that concatenates two strings
* @s1: *str_concat
* @s2: *str_concat
*
* Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
size_t s1_len = 0, s2_len = 0;
char *new;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);
new = malloc(s1_len + s2_len + 1);
if (new == NULL)
{
return (NULL);
}
strcpy(new, s1);
strcat(new, s2);
return (new);
}
