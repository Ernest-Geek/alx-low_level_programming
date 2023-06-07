#include <stdio.h>
#include "main.h"
/**
 * _sqrt - Entry point
 * Description: Natural square root
 * @y: Integer
 * @z: integer
 * Return: -1 if negative n if 0 or 1
 */
int _sqrt(int y, int z)
{
if (z * z == y)
{
return (z);
}
if (z == y / 2)
{
return (-1);
}
return (_sqrt(y, z + 1));
}

/**
 * _sqrt_recursion - Entry point
 * Description: Natural square rootr
 * @y: integer
 * Return: -1 if negative n if 0 or 1
 */
int _sqrt_recursion(int y)
{
int z = 0;
if (y < 0)
{
return (-1);
}
if (y == 1)
{
return (1);
}
return (_sqrt(y, z));
}
