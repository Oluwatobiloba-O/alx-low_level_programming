#include "lists.h"

/**
 *  delete_dnodeint_at_index - Entry point (deletes the node)
 *  @head: pointer to the head of the list
 *  @index: index
 *  Return: -1 or 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = NULL;
unsigned int x = 0, num = 0;

if (head == NULL || *head == NULL)
return (-1);
temp = *head;
while (temp != NULL)
{
num++;
temp = temp->next;
}
if (index >= num)
return (-1);

temp = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
}
else
{
while (x < index)
{
temp = temp->next;
x++;
}
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
}

return (1);
}
