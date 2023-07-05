#include "main.h"

/**
* is_prime_recursive - Helper function to
* check if a number is prime recursively
* @n: The number to check
* @i: The current divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_recursive(int n, int i)
{
if (n <= 1) /* Base case: n is not prime */
return (0);

if (n == 2) /* Base case: 2 is prime */
return (1);

if (n % i == 0) /* Base case: n is divisible by i, not prime */
return (0);

if (i * i > n) /* Base case: checked all possible divisors, n is prime */
return (1);

return (is_prime_recursive(n, i + 1));
/* Recursive call to check next divisor */
}

/**
* is_prime_number - Checks if a number is prime
* @n: The number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}

