#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int i, j;
    int len1 = 0, len2 = 0, len = 0;
    int *result;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    len1 = _strlen(argv[1]);
    len2 = _strlen(argv[2]);
    len = len1 + len2;

    result = malloc(sizeof(int) * len);
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < len; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    if (result[0] == 0)
        i = 1;
    else
        i = 0;

    for (; i < len; i++)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
    return 0;
}

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int len = 0;

    while (*str)
    {
        len++;
        str++;
    }

    return len;
}

