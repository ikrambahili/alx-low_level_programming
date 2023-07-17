#include <stdlib.h>
#include "dog.h"

/**
 * length_of_string - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
size_t length_of_string(const char *str)
{
    size_t length = 0;

    if (str != NULL)
    {
        while (str[length] != '\0')
            length++;
    }

    return length;
}

/**
 * copy_string - Copies a string from source to destination
 * @dest: The destination string
 * @src: The source string
 */
void copy_string(char *dest, const char *src)
{
    if (dest != NULL && src != NULL)
    {
        size_t i = 0;

        while (src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }

        dest[i] = '\0';
    }
}

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
    new_dog->owner = owner_copy;
    new_dog->age = age;

    return (new_dog);
}

