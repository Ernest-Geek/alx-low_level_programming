#include <stdio.h>
#include "main.h"
/**
 * has_remainder - Enry point
 * Descroption: Prime number
 * @x: Integer
 * @div: Integer
 * Return: 1 if the prime number is 0 otherwise
 */
int has_remainder(int x, int div)
{
if (div == 1 || div == x)
{
return (0);
}
if (x % div == 0)
{
return (1);
}
return (has_remainder(x, div - 1));
}
/**
 * is_prime_number - Entry point
 * Descrption of code: prime number
 * @x: Integer
 * Return: 1 if prime number or otherwise
 **/
int is_prime_number(int x)
{
if (x <= 1)
{
return (0);
}
if (x == 2)
{
return (1);
}
return (!has_remainder(x, x - 1));
}
