#include "main.h"

/**
* my_strlen - my_strlen function
* @str: the string you want to get the size of
*
* Description: this function return the size of a string
*
* Return: return lenght of a string
*/
int my_strlen(char const *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}

/**
* main - main function
*
* Return: return success
*/
int main(void)
{
	char *string = "_putchar\n";

	write(1, string, my_strlen(string));
	return (0);
}
