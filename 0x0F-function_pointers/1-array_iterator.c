#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Entry point
 * code description: Execute a function given as a parameter
 * @array: pointer to array
 * @size: size of an array
 * @action: pointer to function to execute each array
 * return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;/**X will be used for the looop**/
/**Check if the array and action is NULL*/
if (array == NULL || action == NULL)
{
return;/**Return void/Nothing**/
}
for (x = 0; x < size; x++)
{
/**call the function**/
action(array[x]);
}
}
