#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Append text to a file
*
* @filename: filename
* @text_content: content
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int x, len, z;

if (!filename)
return (-1);

x = open(filename, O_WRONLY | O_APPEND);
if (x == -1)
return (-1);

if (!text_content)
{
close(x);
return (1);
}

len = 0;
while (text_content[len] != '\0')
len++;

z = write(x, text_content, len);
if (z == -1 || z != len)
{
close(x);
return (-1);
}

close(x);
return (1);
}
