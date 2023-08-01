#include "lists.h"

/**
* get_nodeint_at_index - RETURNS the nth node of a listint_t LINKED LIST.
* @head:POINTER to head of the LINKED LIST.
* @index: INDEX of  node, starting FROM 0.
* Return:POINTER to  nth node, or NULL if node does EXIST.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
