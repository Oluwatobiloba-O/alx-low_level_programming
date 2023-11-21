#include "lists.h"

/**
* listint_len - Entry point
*
* @h: pointer
* Return: num_node
*/
size_t listint_len(const listint_t *h)
{
size_t num_node = 0;

while (h)
{
h = h->next;
num_node++;
}
return (num_node);
}

