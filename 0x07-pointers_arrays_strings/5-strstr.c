#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 *
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;
k = i;
while (haystack[k] == needle[j] && needle[j] != '\0' && haystack[k] != '\0')
{
k++;
j++;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
