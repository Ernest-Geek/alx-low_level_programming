#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
/* Recursive case: print string in reverse order */
if (*s != '\0')
{
_print_rev_recursion(s + 1);  /* Recursively*/
/* call function with next character */
_putchar(*s);  /* Print current character */
}
/* Base case: end of string, do nothing */
}
