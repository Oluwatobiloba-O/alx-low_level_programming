#include "lists.h"

/**
* get_nodeint_at_index - Entry point (get_nodeint_at_index)
*
* @head: pointer
* @index: index
* Return: temp or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int x;

for (x = 0; temp != NULL && x < index; x++)
temp = temp->next;

return (temp);
}
