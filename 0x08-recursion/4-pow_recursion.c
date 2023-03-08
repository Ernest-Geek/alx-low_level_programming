#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
/* Base case: y is 0, result is 1 */
if (y == 0)
{
return (1);
}
/* Base case: y is 1, result is x */
else if (y == 1)
{
return (x);
}
/* Base case: y is negative, error */
else if (y < 0)
{
return (-1);
}
/* Recursive case: compute x raised*/
/* to the power of y - 1 and multiply by x */
else
{
return (x * _pow_recursion(x, y - 1));
}
}
