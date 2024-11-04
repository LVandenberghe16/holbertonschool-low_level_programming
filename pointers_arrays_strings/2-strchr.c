#include "main.h"

/**
 * _strchr - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: pointer to the memory area to fill
 * @c: constant byte to fill memory with
 *
 * Return: pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	for(; *s != c; s++);
	return s;
}
