#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * code description: returns the sum of all its parameters
 * @n: number of parameters to sum
 * Return: 0 if n == 0 or the sum of all its paramters
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
/**which will be used to accumulate the total of the zeros**/
int total = 0;
unsigned int x;
if (n == 0)
{
return (0);
}
/**initialize the va_list with the first parameter**/
va_start(ap, n);
for (x = 0; x < n; x++)
{
/**add each parameter to the total**/
total += va_arg(ap, int);
}
/**clean up the va_list**/
va_end(ap);
return (total);
}

