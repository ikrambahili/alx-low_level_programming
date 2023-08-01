#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - DELETES  node at given index in a LINKED LIST
* @head: POINTER to  POINTER to FIRST ELEMENT of  LIST.
* @index: The index of node to be deleted
*
* Return: 1 if  deletion is successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
prev = NULL;
while (current)
{
if (count == index)
{
if (prev == NULL) /* If node to be deleted is  FIRST  node */
*head = current->next;
else
prev->next = current->next;
free(current);
return (1);
}
prev = current;
current = current->next;
count++;
}
return (-1); /* Index is out of RANGE */
}

