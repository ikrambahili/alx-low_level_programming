#include "main.h"

/**
* sqrt_recursive - Helper function to calculate the square root recursively
* @n: The number to calculate the square root of
* @i: The current value to check as the square root
*
* Return: The square root of n, or -1 if it does not have a natural square root
*/
int sqrt_recursive(int n, int i)
{
if (i * i > n) /* Base case: natural square root not found */
return (-1);

if (i * i == n) /* Base case: natural square root found */
return (i);

return (sqrt_recursive(n, i + 1)); /* Recursive call to check next value */
}

/**
* _sqrt_recursion - Calculates the natural square root of a number
* @n: The number to calculate the square root of
*
* Return: The square root of n, or -1 if it does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* Check for error condition */
return (-1);

return (sqrt_recursive(n, 0));
}

