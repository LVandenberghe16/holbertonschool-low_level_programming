#include <unistd.h>
/**
* print_diagonal - oui
* @n: num
* Return: restult
*/
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		write(1, "\n", 1);
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			write(1, " ", 1);
		}
		write(1, "\\\n", 2);
	}
}
