#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest
 * @dest: The destination array where the content is to be copied
 * @src: The source string to be copied
 * @n: The maximum number of characters to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
