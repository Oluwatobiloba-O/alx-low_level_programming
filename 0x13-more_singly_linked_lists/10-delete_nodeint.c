#include "lists.h"

/**
* delete_nodeint_at_index - Entry point ()
*
* @head: pointer
* @index: index
* Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *recent, *temp;
unsigned int x = 1;

if (*head == NULL)
return (-1);
recent = *head;
if (index == 0)
{
*head = (*head)->next;
free(recent);
}
else
{
while (x < index)
{
recent = recent->next;
if (recent == NULL)
return (-1);
x++;
}
temp = recent;
temp = temp->next;
recent->next = temp->next;
free(temp);
}
return (1);
}
