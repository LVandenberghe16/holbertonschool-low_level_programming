#include <unistd.h>

/**
* _strlen - oui
* @s: num
* Return: restult
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
