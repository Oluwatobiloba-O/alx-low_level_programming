#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
char *command = NULL;
char *args[] = { "ls", "-l", NULL };

if (argc == 2)
{
/* Batch mode (reading commands from a file) */
command = read_file(argv[1]);
if (!command)
{
exit_shell("Error reading file");
}
}

while (1)
{
char *token;
int i = 0;

if (argc != 2)
{
/* Interactive mode */
printf("#cisfun$ ");
command = read_line();
if (!command)
{
break;  /* Ctrl+D pressed or an error occurred */
}
}

handle_comments(command);
command = replace_variables(command);
handle_separator(command);
handle_logical_operators(command);
handle_alias(command);

token = strtok(command, " ");
while (token != NULL)
{
args[i++] = token;
token = strtok(NULL, " ");
}
args[i] = NULL;

execute_command(args);

if (argc != 2)
{
/* Interactive mode - free the memory allocated by read_line */
free(command);
}
}

exit_shell(NULL);
return 0;
}
