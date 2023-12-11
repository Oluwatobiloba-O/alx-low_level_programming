#include <stdio.h>
#include <stdlib.h>

void exit_shell(char *status)
{
if (status != NULL)
{
int exit_status = atoi(status);
exit(exit_status);
}
printf("Exiting simple shell.\n");
exit(EXIT_SUCCESS);
}
