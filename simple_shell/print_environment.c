#include <stdio.h>

extern char **environ;

void print_environment(void)
{
char **env = environ;

while (*env != NULL)
{
printf("%s\n", *env);
env++;
}
}
