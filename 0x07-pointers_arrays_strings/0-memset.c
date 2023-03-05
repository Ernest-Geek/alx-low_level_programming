#include <stdio.h>
/**
 * _memset - fills a memory area with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to be filled with the constant byte
 * Description: This function fills the first n bytes
 *  of the memory area pointed
 * to by s with the constant byte b.
 * Return: a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + 1) = b;
}
return (s);
}
