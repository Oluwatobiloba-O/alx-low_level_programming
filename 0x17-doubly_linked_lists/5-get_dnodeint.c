#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point (get_dnodeint_at_index)
 * @head: pointer to the head of the list
 * @index: index
 * Return: NULL if failure or temp->n on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int num = 0;
dlistint_t *temp = NULL;

temp = head;
while (temp != NULL)
{
if (num == index)
return (temp);
temp = temp->next;
num++;
}

return (NULL);
}
