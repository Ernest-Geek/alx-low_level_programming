#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string to be searched
 * @c: character to be located
 * Return: pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
char *p = s;
while (*p != '\0')
{
if (*p == c)
{
return (p);
}
p++;
}
if (c == '\0')
{
return (p);
}
return (NULL);
}
