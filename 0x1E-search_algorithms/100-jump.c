#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - an algo to find a number in a sorted array
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 * Return: number index or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int a, b, n;

	if (array == NULL || !value)
		return (-1);
	a = 0;
	b = sqrt(size);
	n = (int) size;

	while (b <= n && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		a = b;
		b = b + sqrt(n);
	}

	printf("Value found between indexes [%d] and [%d]\n", a, b);

	while (a < b + 1)
	{
		if (array[a] == value)
			return (a);
		else if (a == b || a >= n)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = a + 1;
	}

	return (-1);
}
