#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - an algo to find a number in an array
 * @array: pointer to an array of numbers
 * @size: size of array
 * @value: number to find
 * Return: number index or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (array[high] != array[low] && (value >= array[low])
			&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	return (-1);
}
