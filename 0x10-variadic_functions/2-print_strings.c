#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * code description: print strings, followed by a new line
 * @separator: pointer pointing to a constant character
 * @n: number of arguments passed to the function
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int x;
char *str;
va_start(ap, n);
/**start the iteration**/
for (x = 0; x < n; x++)
{
/**Get the next argument from the list**/
str = va_arg(ap, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
/**if the separator is null then we print it**/
if (separator != NULL && x == (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
