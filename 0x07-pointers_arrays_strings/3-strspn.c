#include <stdio.h>
/**
 * _strspn - calculates the length of the initial segment of a string
 * that consists entirely of characters from a given set
 * @s: the string to check
 * @accept: the set of characters to match
 * Return: the length of the initial segment
 * of s that consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0; /** initialize the count to 0**/
int found; /** flag to indicate whether the**/
/**character is found in the accept string**/
char *a; /** pointer to iterate over the accept string**/
/** iterate over each character in s**/
while (*s)
{
found = 0; /** reset the flag for each character in s**/
a = accept; /** initialize the accept string pointer**/
/** iterate over each character in accept**/
while (*a)
{
if (*s == *a)
{ /** if a match is found**/
count++; /** increment the count**/
found = 1; /** set the flag to true**/
break; /** exit the inner loop**/
}
a++; /** move to the next character in accept**/
}
if (!found)
break; /** if no match was found, exit the outer loop**/
s++; /** move to the next character in s**/
}
return (count); /** return the count of matching characters**/
}
