#include "main.h"
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: The pointer to the memory block to reallocate
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes, of the new memory block
*
* Return: A pointer to the newly allocated memory block
*         NULL if new_size is equal to zero and ptr is not NULL
*         NULL if malloc fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *p, *np;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
old_size = new_size;
p = ptr;
np = new_ptr;
for (i = 0; i < old_size; i++)
np[i] = p[i];
free(ptr);
return (new_ptr);
}

