#include "main.h"

/**
 * _strncat - Concatenates up to n bytes from src to dest
 * @dest: The destination string to which src will be appended
 * @src: The source string to be appended to dest
 * @n: The maximum number of bytes to take from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}
