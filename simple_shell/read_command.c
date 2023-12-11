#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *read_command(void)
{
char *buffer = NULL;
size_t bufsize = 0;

if (getline(&buffer, &bufsize, stdin) == -1)
{
free(buffer);
return NULL;
}

return buffer;
}

