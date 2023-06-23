#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * code description: prints numbers, followed by a new line
 * @separator: pointer that points to a constant character
 * @n: number of integers passed to the funtion
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int x;
va_start(ap, n);
for (x = 0; x < n; x++)
{
printf("%d\n", va_arg(ap, int));
/**check if the separator is null and its not the last argument**/
if (separator != NULL && x != (n - 1))
{
printf("%s", separator);
}
printf("\n");
/**free a va_list**/
va_end(ap);
}
}
