#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
