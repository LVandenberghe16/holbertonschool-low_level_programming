#include <stdlib.h>

/**
 * _strdup - duplicates a string in a newly allocated memory space
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0';
	return (dup);
}
