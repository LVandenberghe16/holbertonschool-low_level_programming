#include <stdio.h>

/**
* main - main function
*
* Return: 0 for success
*/
int main(void)
{
	char *alphabet = "0123456789abcdef\n";
	int i = 0;

	while (i != 17)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
