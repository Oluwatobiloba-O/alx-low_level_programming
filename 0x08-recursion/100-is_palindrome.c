#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * check_palindrome - Entry point (check_palindrome)
 *
 * @s: check_palindrome
 * @left: check_palindrome
 * @right: check_palindrome
 * Return: 0
 */
int check_palindrome(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (s[left] != s[right])
{
return (0);
}
return (check_palindrome(s, left + 1, right - 1));
}

/**
* is_palindrome - check if string is a palindrome
* @s: check_palindrome
* Return: 1 or 0
**/
int is_palindrome(char *s)
{
int len = strlen(s);
return (check_palindrome(s, 0, len - 1));
}
