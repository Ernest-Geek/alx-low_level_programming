#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
/* Base case: end of string */
if (*s == '\0')
{
_putchar('\n'); /* Print new line */
return;
}
/* Recursive case: print current character*/
/* and call function with next character */
_putchar(*s);
_puts_recursion(s + 1);
}
