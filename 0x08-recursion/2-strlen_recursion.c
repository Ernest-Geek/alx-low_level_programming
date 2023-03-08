#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to find length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
/* Base case: end of string */
if (*s == '\0')
{
return (0);
}
/* Recursive case: increment length*/
/*and call function with next character */
else
{
return (1 + _strlen_recursion(s + 1));
}
}
