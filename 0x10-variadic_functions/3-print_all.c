#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Entry point
 * @format: list of types of argument passed to the function
 * Retur: void
 **/
void print_all(const char * const format, ...)
{
va_list ap;
int x = 0;
char *n;
va_start(ap, format);
/*looping throught the format string**/
while (format && format[x])
{
switch (format[x])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", (float) va_arg(ap, double));
break;
case 's':
n = va_arg(ap, char *);
if (n == NULL)
{
printf("(nil)");
break;
}
printf("%s", n);
break;
default:
x++;
continue;
}
if (format[x + 1])
printf(", ");
x++;
}
printf("\n");
va_end(ap);
}

