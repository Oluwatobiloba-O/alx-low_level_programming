#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *string_nconcat - concatenates two strings

* @s1: string_nconcat 1
* @s2: string_nconcat 2
* @n: string_nconcat
*
* Return: Always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t s1_len;
size_t s2_len;
char *output;

if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}
output = malloc(s1_len + n + 1);
if (!output)
{
return (NULL);
}
memcpy(output, s1, s1_len);
memcpy(output + s1_len, s2, n);
output[s1_len + n] = '\0';

return (output);
}
