#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
* _strstr - finds substring
*
* @haystack: array
* @needle: bytes
* Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
size_t needle_len = strlen(needle);
if (needle_len == 0)
{
return (haystack);
}
while (*haystack)
{
if (strncmp(haystack, needle, needle_len) == 0)
{
return (haystack);
}
haystack++;
}
return (0);
}
