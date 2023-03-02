#include "main.h"
/**
 * _strcmp - Entry point
 * Description: Compares two strings
 * @s1: Char
 * @s2: Char
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
