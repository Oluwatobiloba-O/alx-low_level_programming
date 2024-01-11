#include "lists.h"

/**
 * dlistint_len - Entry point (dlistint_len)
 * @h: pointer to the head
 * Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t count = 0;

temp = h;
while (temp != NULL)
{
count = count + 1;
temp = temp->next;
}

return (count);
}
