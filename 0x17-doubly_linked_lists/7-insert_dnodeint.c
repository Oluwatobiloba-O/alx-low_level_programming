#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 * @h: points to the head of the list
 * @idx: index
 * @n: points to n
 * Return: node_new or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = NULL;
dlistint_t *node_new = NULL;
unsigned int x = 0, num = 0;

temp = *h;
while (temp != NULL)
{
num++;
temp = temp->next;
}
if (idx > num)
return (NULL);
else if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;
while (x < idx - 1)
{
temp = temp->next;
x++;
}
node_new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (node_new == NULL)
return (NULL);
node_new->n = n;
node_new->prev = temp;
node_new->next = temp->next;
if (temp->next != NULL)
temp->next->prev = node_new;
temp->next = node_new;

return (node_new);
}
