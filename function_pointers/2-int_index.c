#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: The index of the first matching element, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1); /* No match found */
}
