#include "main.h"
#include <stdlib.h>
#include <string.h>
int count_words(char *str);
int word_length(char *str);
char **allocate_memory(int words, int total_length);
void free_memory(char **arr, int index);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int words_count, i, j, k, length;

    if (str == NULL || *str == '\0')
        return (NULL);

    words_count = count_words(str);
    if (words_count == 0)
        return (NULL);

    words = allocate_memory(words_count, strlen(str));
    if (words == NULL)
        return (NULL);

    i = 0;
    j = 0;
    while (str[i] != '\0' && j < words_count)
    {
        if (str[i] != ' ')
        {
            length = word_length(&str[i]);
            words[j] = malloc((length + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                free_memory(words, j);
                return (NULL);
            }

            for (k = 0; k < length; k++)
                words[j][k] = str[i++];
            words[j][k] = '\0';
            j++;
        }
        else
        {
            i++;
        }
    }

    words[j] = NULL;
    return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words from
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            count++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
        else
        {
            i++;
        }
    }

    return (count);
}

/**
 * word_length - calculates the length of a word
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int word_length(char *str)
{
    int length = 0;

    while (str[length] != ' ' && str[length] != '\0')
        length++;

    return (length);
}

/**
 * allocate_memory - allocates memory for the array of words
 * @words: the number of words
 * @total_length: the total length of the string
 *
 * Return: a pointer to the allocated memory
 */
char **allocate_memory(int words, int total_length)
{
    char **arr;

    arr = malloc((words + 1) * sizeof(char *));
    if (arr == NULL)
        return (NULL);

    arr[words] = NULL;

    return (arr);
}

/**
 * free_memory - frees the allocated memory
 * @arr: the array of words
 * @index: the index to start freeing from
 */
void free_memory(char **arr, int index)
{
    while (index >= 0)
        free(arr[index--]);

    free(arr);
}

