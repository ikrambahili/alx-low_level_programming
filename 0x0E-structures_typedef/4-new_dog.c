#include <stdlib.h>
#include "dog.h"m
/**
* new_dog - Creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the newly created dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy;
char *owner_copy;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = malloc(sizeof(char) * (length_of_string(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
owner_copy = malloc(sizeof(char) * (length_of_string(owner) + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
copy_string(name_copy, name);
copy_string(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}

