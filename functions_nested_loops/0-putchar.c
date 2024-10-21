#include "main.h"

/**
* main - main function
*
* Return: return success
*/
int main(void)
{
	char *string = "_putchar";
	int i;

	for (i = 0; i != strlen(string); i++)
	{
		write(0, string[i], 1);
	}
	write(0, '\n', 1);
	return (0);
}
