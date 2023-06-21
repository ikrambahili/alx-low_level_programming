#include <stdio.h>
/**
*main - prints the sum of all the multiples of 3 or 5 below 1024
*Return: Always (success)
*/
int main(void)
{
int limit = 1024;
int sum = 0;
int i;

for (i = 1; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}
}

printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);

return (0);
}

