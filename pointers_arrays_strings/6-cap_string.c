#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 'a' + 'A';
		}
	i++;
	}
	return (str);
}