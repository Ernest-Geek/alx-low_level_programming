#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_search - an algo to find a number in a sorted array
 * @array: array of numbers
 * @size: size of array
 * @value: number to find
 * Return: Value index or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (size - 1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
