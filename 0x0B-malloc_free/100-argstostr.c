#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* argstostr - a function that concatenates all the arguments
* @ac: argstostr
* @av: argstostr
*
* Return: Always 0
*/
char *argstostr(int ac, char **av)
{
int argument = 0;
char *str;
int x;
int y;
int z;

if (ac == 0 || av == NULL)
return (NULL);

for (x = 0; x < ac; x++)
argument += strlen(av[x]) + 1;

str = malloc(argument + 1);
if (str == NULL)
return (NULL);

z = 0;
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++, z++)
str[z] = av[x][y];
str[z++] = '\n';
}
str[z] = '\0';

return (str);
}
