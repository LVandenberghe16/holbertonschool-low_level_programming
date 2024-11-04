#include "main.h"
#include <stdio.h>

/**
 * _strstr - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @haystack: pointer to the memory area to fill
 * @needle: constant byte to fill memory with
 *
 * Return: pointer to the memory area s
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		n = needle;
		h = haystack;
		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

