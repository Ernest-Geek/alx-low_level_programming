#include <stdio.h>
#include "main.h"
/**
 * factorial - computes the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
/* Base case: n is 0 or 1, factorial is 1 */
if (n == 0 || n == 1)
{
return (1);
}
/* Base case: n is negative, error */
else if (n < 0)
{
return (-1);
}
/* Recursive case: compute factorial*/
/* of n - 1 and multiply by n */
else
{
return (n * factorial(n - 1));
}
}
