#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/**
* struct list_s - singly linked list node
* @str: String data
* @len: Length of the string
* @next: Pointer to the next node
*
* Description: Node structure for a singly linked list.
*/
typedef struct list_s
{
char *str; /* String data */
unsigned int len; /* Length of the string */
struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* LISTS_H */

