#include "main.h"
/**
 * binary_to_uint - Entry point
 * @b: pointer pointing to a string of 0 and 1 chars.
 * code description: converts a binary number to an unsigned int.
 * Return: The converted number, or 0 if b is NULL or there's a non 0 or 1 char
 **/
unsigned int binary_to_uint(const char *b)
{
unsigned int output = 0;
int x;
if (!b)
return (0);
/**iterating through each character in the input string**/
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] != '0' && b[x] != '1')
/**Indicating an invalid input**/
return (0);
/**calculate the unsigned integer value**/
output = output * 2 + (b[x] - '0');
}
return (output);
}
