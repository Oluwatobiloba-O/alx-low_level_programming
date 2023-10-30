#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* **strtow -  a function that splits a string into abc
* @str: strtow
*
* Return: Always zero
*/
char **strtow(char *str)
{
char **abc;
int i;
int j;
int k;
int xyz;
int num_word;
if (str == NULL || *str == '\0')
return (0);
xyz = strlen(str);
num_word = 0;
for (i = 0; i < xyz; i++)
{
if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
num_word++;
}
abc = (char **) malloc((num_word + 1) * sizeof(char *));
if (abc == NULL)
return (0);
i = 0;
j = 0;
while (i < xyz && j < num_word)
{
while (isspace(str[i]))
i++;
k = i;
while (k < xyz && !isspace(str[k]))
k++;
abc[j] = (char *) malloc((k - i + 1) * sizeof(char));
if (abc[j] == NULL)
return (0);
strncpy(abc[j], str + i, k - i);
abc[j][k - i] = '\0';
j++;
i = k;
}
abc[j] = NULL;
return (abc);
}
