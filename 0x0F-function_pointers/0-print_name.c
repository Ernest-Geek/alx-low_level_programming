#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Entry point
 * code description: Prints a name
 * @f: function that takes a character pointer
 * @name: name of the person
 * return: void
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
