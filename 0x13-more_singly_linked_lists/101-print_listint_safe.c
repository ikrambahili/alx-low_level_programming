#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - PRINTS A listint_t LINKED LIST with LOOP DETECTION
* @head:POINTER to  FIRST ELEMENT of LIST
*
* Return: number of nodes in LIST
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;
if (head == NULL)
return (0);
slow = head;
fast = head;
while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
count++;
}
/* PRINT ANY remaining nodes after LOOP */
while (slow)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
count++;
}
return (count);
}

