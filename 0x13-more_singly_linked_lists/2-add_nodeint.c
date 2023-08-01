#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: Pointer to a pointer to the head of  linked LIST.
* @n:  value to be assigned to new node.
* Return: address of  new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}