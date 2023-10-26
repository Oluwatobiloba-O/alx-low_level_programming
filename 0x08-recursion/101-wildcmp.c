#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * substring_match - Entry point (substring_match)
 *
 * @s1: substring_match
 * @s2: substring_match
 * @wldcrd: substring_match
 * Return: 1 or 0
 */
int substring_match(char *s1, char *s2, char *wldcrd)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == '\0' && *s2 == '*')
return (substring_match(s1, s2 + 1, s2 + 1));
if (*s1 == '\0' && *s2 != '\0')
return (0);
if (*s2 == '*')
return (substring_match(s1, s2 + 1, s2 + 1));
if (*s1 == *s2)
return (substring_match(s1 + 1, s2 + 1, wldcrd));
else
return (substring_match(s1 + 1, wldcrd, wldcrd));
}

/**
* wildcmp - 1 if substring_match
* @s1: char s1
* @s2: char s2
* Return: 0
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (substring_match(s1, (s2 + 1), (s2 + 1)));
else
return (0);
}
