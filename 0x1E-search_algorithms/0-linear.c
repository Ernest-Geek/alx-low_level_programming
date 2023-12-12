#include <stdio.h>

/**
 * linear_search - Search for a value in an array using Linear Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not present
 */
int linear_search(int *array, size_t size, int value)
{
	/**Used for iteration**/
	size_t i;
	/**Checks if the input array is NULL**/
	if (array == NULL)
		return (-1);
	/**iterate through each element in the array**/
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d<n]", i, array[i]);

	/**Checks if the current value = target value**/
		if (array[i] == value)
			return (i);
	}
	/**Value not found**/
	return (-1);
}


