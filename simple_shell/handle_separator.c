#include "simple_shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void handle_separator(char *commands)
{
char *command = strtok(commands, ";");

while (command != NULL)
{
char **args = malloc(2 * sizeof(char *));
if (args == NULL)
{
perror("malloc");
exit(EXIT_FAILURE);
}

args[0] = command;
args[1] = NULL;

execute_command(args);

free(args);

command = strtok(NULL, ";");
}
}
