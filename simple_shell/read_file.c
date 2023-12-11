#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>

char *read_file(const char *filename)
{
FILE *file;
long size;
char *content;
	
file= fopen(filename, "r");
if (!file)
{
perror("fopen");
exit(EXIT_FAILURE);
}

fseek(file, 0, SEEK_END);
size = ftell(file);
fseek(file, 0, SEEK_SET);

content = malloc(size + 1);
if (!content)
{
perror("malloc");
exit(EXIT_FAILURE);
}

fread(content, 1, size, file);
fclose(file);

content[size] = '\0';
return content;
}
