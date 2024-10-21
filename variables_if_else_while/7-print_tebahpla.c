#include <stdio.h>

/**
* main - main function
*
* Return: 0 for success
*/
int main(void)
{
	char *alphabet = "zyxwvutsrqponmlkjihgfedcba\n";
	int i = 0;

 	while (i != 27)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}

