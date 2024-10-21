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
* _putchar - _putchar function
*
* @string: the string you want to print
*
* Return: return success
*/
int _putchar(char *string)
{
	write(1, string, my_strlen(string));
	return (0);
}

/**
 * print_alphabet - check the code
 *
 */
void print_alphabet(void)
{
    _putchar("abcdefghijklmnopqrstuvwxyz\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}