#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *p; /** pointer to iterate over the input string**/
char *a; /** pointer to iterate over the accept string**/
/** iterate over each character in s**/
for (p = s; *p != '\0'; p++)
{
/** iterate over each character in accept**/
for (a = accept; *a != '\0'; a++)
{
if (*p == *a)
{ /** if a match is found**/
return (p); /** return a pointer to the matching byte**/
}
}
}
return (NULL); /** no matching byte was found, return NULL**/
}
