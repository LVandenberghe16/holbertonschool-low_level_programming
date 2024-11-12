#include <stdlib.h>

/**
 * array_range - Creates an array of integers from `min` to `max` (inclusive).
 * @min: The starting value of the range.
 * @max: The ending value of the range.
 *
 * Return: A pointer to the newly created array, or NULL if an error occurs.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
