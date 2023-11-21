#include "lists.h"

/**
* print_listint - Entry point (print_listint)
* @h: pointer for list head
*
* Return: num
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}

return (count);
}
