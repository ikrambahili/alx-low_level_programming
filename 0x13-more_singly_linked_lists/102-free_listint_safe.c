#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t LINKED LIST with LOOP DETECTION
* @h: POINTER tO POINTER to the FIRST element of LIST
*
* Return: SIZE of thE LIST that was freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current)
{
count++;
if (current->next >= current)
{
*h = NULL;
free(current);
return (count);
}
temp = current;
current = current->next;
temp->next = NULL;
free(temp);
}
*h = NULL;
return (count);
}

