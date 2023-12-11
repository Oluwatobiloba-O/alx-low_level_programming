#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace_variables(char *command)
{
printf("Replacing variables: %s\n", command);

return strdup(command);
}
