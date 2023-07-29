#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/* Structure for a singly linked list node */
typedef struct list_s
{
char *str; /* String data */
unsigned int len; /* Length of the string */
struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
