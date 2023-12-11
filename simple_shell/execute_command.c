extern char **environ;

#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute_command(char **args)
{
pid_t pid;

pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}

if (pid == 0)
{
/* Child process */
if (execvp(args[0], args) == -1)
{
perror("execvp");
exit(EXIT_FAILURE);
}
}
else
{
/* Parent process */
wait(NULL);
/* Wait for the child to complete */
}
}
