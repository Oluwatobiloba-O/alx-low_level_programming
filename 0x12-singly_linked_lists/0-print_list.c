#include "lists.h"
#include <stdio.h>

/**
* print_list - prints a linked list
*
* @h: pointer
* Return: (x) nodes
*/
size_t print_list(const list_t *h)
{
unsigned int x = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
x++;
}
return (x);
}
