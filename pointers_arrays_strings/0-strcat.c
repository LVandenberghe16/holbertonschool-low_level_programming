#include "main.h"

/**
 * _strcat - Concatenates the src string to the dest string
 * @dest: The destination string to which src will be appended
 * @src: The source string to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
