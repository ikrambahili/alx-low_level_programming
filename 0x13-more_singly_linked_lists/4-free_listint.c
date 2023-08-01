#include "lists.h"
#include <stdlib.h>

/**
* free_listint- Frees a listint_t LIST.
* @head: POINTER to the head of the linked LIST.
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
