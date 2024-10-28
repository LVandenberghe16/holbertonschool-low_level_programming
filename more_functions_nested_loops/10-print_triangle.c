#include <unistd.h>

/**
* print_triangle - oui
* @size: num
* Return: restult
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		write(1, "\n", 1);
		return;
	}
    for (i = 1; i <= size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			write(1, " ", 1);
		}
		for (j = 0; j < i; j++)
		{
			write(1, "#", 1);
		}
	write(1, "\n", 1);
	}
}
