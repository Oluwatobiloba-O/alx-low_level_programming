#include "lists.h"

/**
* list_len - Entry point (list_len)
*
* @h: pointer
* Return: x
*/
size_t list_len(const list_t *h)
{
unsigned int x = 0;

while (h)
{
x++;
h = h->next;
}
return (x);
}
