#include "function_pointers.h"
/**
 * int_index - Entry point
 * code description: Seacrhes for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function used to compare values
 * Return: -1 if no element matches if size <= 0 return 1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
int output;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (x = 0; x < size; x++)
{
output = cmp(array[x]);
if (output != 0)
{
return (x);
}
}
return (-1);
}
