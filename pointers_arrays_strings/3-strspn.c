#include "main.h"
#include <stdio.h>

/**
 * _strchr - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: pointer to the memory area to fill
 * @accept: constant byte to fill memory with
 *
 * Return: pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, s_a;
	int size = 0;
	int found = 0;
	int end = 0;

	for (s_a = 0; accept[s_a] != '\0'; s_a++);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				size++;
				break;
			}
			if (found == 1 && accept[j] != s[i] && j == s_a - 1)
				end = 1;
		}
		if (end == 1)
			return (size);
	}
	return (size);
}
