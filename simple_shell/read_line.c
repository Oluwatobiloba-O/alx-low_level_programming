#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *read_line(void)
{
static char buffer[BUFFER_SIZE];
static int position = 0;
static int bytesRead = 0;

if (position >= bytesRead) {
bytesRead = read(STDIN_FILENO, buffer, BUFFER_SIZE);
if (bytesRead <= 0)
{
return NULL;
/* End of file or error */
}
position = 0;
}

return &buffer[position++];
}
